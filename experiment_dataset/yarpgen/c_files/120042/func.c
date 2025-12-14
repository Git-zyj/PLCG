/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120042
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [(signed char)6] [i_1] [i_0] = ((/* implicit */_Bool) (unsigned short)65535);
                    arr_9 [i_0] [i_2] [i_2] = ((/* implicit */short) 5487633778666913345ULL);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) 16826563689871892469ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (3404315728U)));
    /* LoopSeq 2 */
    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_5 [i_3] [i_3] [i_3])))) ? (min((arr_5 [i_3] [i_3] [(unsigned short)20]), (((/* implicit */unsigned long long int) arr_10 [i_3] [i_3])))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_10 [i_3] [i_3])))));
        arr_13 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 16826563689871892450ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (0U))), (((((/* implicit */_Bool) (short)32767)) ? (4294967289U) : (890651581U)))))) ? (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)65535))))), (arr_6 [i_3] [i_3] [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2900501558178542275ULL))))))));
        /* LoopNest 3 */
        for (signed char i_4 = 2; i_4 < 23; i_4 += 3) 
        {
            for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                for (short i_6 = 4; i_6 < 22; i_6 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) 4294967295U);
                        var_21 = ((/* implicit */unsigned long long int) min((-2109111885), (((/* implicit */int) (unsigned char)240))));
                        var_22 |= ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-32764))))))))));
                        arr_21 [i_3] [i_4 - 2] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((unsigned char) min((arr_20 [i_4 - 2] [i_6 + 2] [i_4 - 2] [i_4]), (arr_20 [i_4 + 1] [i_6 - 4] [i_6] [i_4]))));
                        var_23 = (+(((/* implicit */int) (signed char)-98)));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned char) (+(15546242515531009340ULL)));
        arr_22 [(unsigned char)23] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_3] [i_3]))));
    }
    /* vectorizable */
    for (signed char i_7 = 0; i_7 < 23; i_7 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 3) 
        {
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                {
                    var_25 = ((/* implicit */unsigned char) (signed char)-28);
                    arr_30 [i_7] = ((/* implicit */short) arr_23 [i_7]);
                    var_26 = ((/* implicit */unsigned long long int) ((signed char) (+(((/* implicit */int) (unsigned char)255)))));
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned int) ((unsigned long long int) arr_5 [i_7] [i_7] [(_Bool)1]));
        var_28 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)254))));
        var_29 = ((/* implicit */unsigned short) 0U);
    }
}
