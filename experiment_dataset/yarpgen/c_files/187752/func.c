/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187752
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((unsigned char) 3670682819565020066ULL))))) + (((unsigned int) ((unsigned int) (short)-7181)))));
                var_20 = ((/* implicit */_Bool) (signed char)110);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) ((((unsigned long long int) (_Bool)1)) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 4294967281U))))) > (((/* implicit */int) ((short) (signed char)7)))))))));
        /* LoopNest 3 */
        for (signed char i_3 = 3; i_3 < 14; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                for (unsigned int i_5 = 2; i_5 < 13; i_5 += 3) 
                {
                    {
                        arr_14 [i_2] [i_4] [i_3] = ((/* implicit */unsigned char) (_Bool)1);
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((int) 1807850788U)))));
                        var_23 = ((/* implicit */short) 2618985560U);
                    }
                } 
            } 
        } 
        var_24 = ((unsigned int) (signed char)-7);
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 15; i_7 += 3) 
        {
            for (signed char i_8 = 1; i_8 < 13; i_8 += 4) 
            {
                {
                    arr_23 [i_6] [i_6] [i_7] [i_6] = ((/* implicit */_Bool) ((unsigned char) ((unsigned char) ((unsigned int) (signed char)19))));
                    var_25 = ((/* implicit */unsigned int) ((short) ((_Bool) ((((/* implicit */int) (signed char)7)) >= (((/* implicit */int) (signed char)6))))));
                }
            } 
        } 
        var_26 &= ((/* implicit */unsigned char) ((short) (signed char)25));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) ((4294967281U) != (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (2487116507U))))))));
        arr_26 [i_9] [i_9] = ((/* implicit */unsigned char) (_Bool)1);
        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) 4294967279U))));
        /* LoopNest 3 */
        for (signed char i_10 = 0; i_10 < 15; i_10 += 1) 
        {
            for (unsigned char i_11 = 0; i_11 < 15; i_11 += 2) 
            {
                for (short i_12 = 0; i_12 < 15; i_12 += 3) 
                {
                    {
                        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) 2487116507U))));
                        arr_36 [i_9] [i_9] [i_9] [i_12] [i_9] [i_9] = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)65))) ^ (2866543404U))) * (((/* implicit */unsigned int) ((((/* implicit */int) ((short) (signed char)79))) >> (((((3454751278964559753ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)68))))) - (13562158085075443785ULL))))))));
                        arr_37 [i_12] [i_10] [i_11] = ((/* implicit */unsigned char) 1807850788U);
                    }
                } 
            } 
        } 
    }
}
