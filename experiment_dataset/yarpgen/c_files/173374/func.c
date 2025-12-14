/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173374
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_4 [(unsigned char)3] [i_1] [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) (signed char)-3)))), (((var_4) ? (arr_0 [i_0]) : (((/* implicit */int) var_9))))));
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(unsigned short)0] [i_1] [i_2] [i_3] [i_4]))) < (2687981226483984412ULL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)65535)) : (arr_6 [i_0])))) ? ((-(672576156U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [(signed char)6] [i_0])) ? (((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_2] [i_3] [5LL])) : (1604329689892585812ULL)))))));
                                var_19 = ((/* implicit */int) var_2);
                                var_20 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) var_15)) <= (((/* implicit */int) arr_9 [i_4] [(short)10] [i_2] [i_1] [i_0]))))), (((((/* implicit */int) (!(((/* implicit */_Bool) 672576156U))))) >> (((arr_5 [i_4] [i_2] [i_1] [i_0]) + (8539032752297823238LL)))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) ((min((arr_1 [(signed char)3]), (arr_1 [i_1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (var_10) : (((/* implicit */long long int) 1921998920U))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)127)) << (((3622391139U) - (3622391132U)))))) : (((((/* implicit */_Bool) (short)25042)) ? (24ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35030)))))))));
                    arr_12 [i_2] [i_1] [i_0] = ((/* implicit */short) max((var_8), (((/* implicit */unsigned short) var_15))));
                }
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 9; i_6 += 2) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_22 [i_7] [i_0] = ((/* implicit */unsigned int) (unsigned short)4);
                                arr_23 [i_6 + 2] [i_1] [1ULL] [i_6] = ((/* implicit */unsigned char) 3468837143U);
                                var_22 += ((/* implicit */short) ((_Bool) (signed char)62));
                                var_23 = ((/* implicit */unsigned int) var_10);
                            }
                        } 
                    } 
                    arr_24 [i_0] = ((/* implicit */short) var_12);
                }
                /* vectorizable */
                for (unsigned char i_8 = 0; i_8 < 11; i_8 += 2) 
                {
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_8] [(unsigned char)6] [i_0] [i_0])) ? (((arr_16 [(_Bool)1] [i_1] [i_1] [i_0]) / (arr_6 [i_0]))) : (((/* implicit */int) (signed char)62))));
                    arr_27 [9ULL] = ((/* implicit */_Bool) arr_9 [i_0] [(unsigned char)1] [i_1] [i_1] [i_8]);
                }
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned int) var_4);
    var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)113))))))) >= (max((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_0))), (((/* implicit */unsigned long long int) min((var_13), (var_13))))))));
    var_27 &= ((/* implicit */_Bool) var_17);
}
