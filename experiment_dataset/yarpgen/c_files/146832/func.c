/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146832
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
    /* LoopSeq 4 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) ((signed char) var_7))), (max((var_4), ((unsigned char)5)))));
        var_12 = ((/* implicit */long long int) var_10);
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        var_13 = ((/* implicit */short) var_1);
                        var_14 = ((/* implicit */long long int) arr_0 [i_0 - 2]);
                        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)5)) && (((/* implicit */_Bool) (signed char)74))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        arr_11 [i_4] = ((/* implicit */_Bool) ((((((int) (signed char)-74)) + (2147483647))) << (((((unsigned long long int) (_Bool)1)) - (1ULL)))));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) var_0))));
        var_17 = ((/* implicit */int) max((((/* implicit */long long int) (signed char)56)), (2378116483643100950LL)));
    }
    for (int i_5 = 0; i_5 < 25; i_5 += 2) 
    {
        arr_14 [i_5] |= ((/* implicit */long long int) ((((/* implicit */int) var_4)) | ((~(-1320158848)))));
        var_18 = ((/* implicit */short) var_10);
        /* LoopSeq 1 */
        for (signed char i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            /* LoopNest 3 */
            for (signed char i_7 = 1; i_7 < 24; i_7 += 2) 
            {
                for (short i_8 = 1; i_8 < 21; i_8 += 2) 
                {
                    for (unsigned long long int i_9 = 1; i_9 < 23; i_9 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((unsigned short) min((((/* implicit */unsigned long long int) (unsigned char)164)), (63ULL)))))));
                            arr_24 [i_5] [i_5] [i_5] [i_5] [i_5] = var_3;
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (167563530U) : (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)4), ((signed char)-75)))))));
                            arr_25 [i_5] [i_5] [i_5] |= ((/* implicit */int) arr_16 [i_8] [i_6]);
                            arr_26 [i_5] [i_6] [i_7 - 1] = ((/* implicit */signed char) (unsigned char)229);
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */int) arr_21 [i_5] [i_5] [i_5]);
        }
        var_22 = ((/* implicit */unsigned int) arr_23 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]);
    }
    for (long long int i_10 = 0; i_10 < 21; i_10 += 3) 
    {
        var_23 *= (unsigned short)13234;
        arr_29 [i_10] = ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))), (((13188922221458530995ULL) << (((arr_27 [i_10]) - (1670689069U))))))));
        arr_30 [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) 2378116483643100960LL))) * (((/* implicit */int) ((unsigned char) var_6)))));
        var_24 = ((/* implicit */unsigned short) min((min((max((((/* implicit */long long int) var_4)), (var_8))), (((/* implicit */long long int) (signed char)-74)))), (((/* implicit */long long int) (~(((/* implicit */int) arr_15 [i_10])))))));
        arr_31 [i_10] [i_10] |= ((/* implicit */unsigned short) ((int) var_8));
    }
    var_25 = ((/* implicit */unsigned int) max(((unsigned char)2), (var_4)));
}
