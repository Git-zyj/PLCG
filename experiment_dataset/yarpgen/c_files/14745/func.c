/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14745
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
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max(((signed char)-81), ((signed char)-88)))) ? (min((2069401786U), (((/* implicit */unsigned int) (signed char)-88)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))))))));
                            var_14 = (((~(arr_1 [i_0]))) >> ((((((-2147483647 - 1)) - (-2147483588))) + (112))));
                            arr_12 [i_0] [i_1] [i_2 - 2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (-(min((844824639), (arr_5 [5U] [5U] [i_1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0] [i_2 + 2] [(unsigned char)3] [i_0])) * (0)))) ? ((-(arr_3 [i_0]))) : (((((/* implicit */_Bool) arr_6 [i_0] [14])) ? (((/* implicit */unsigned long long int) 2147483630)) : (arr_3 [i_1]))))) : (((/* implicit */unsigned long long int) ((arr_0 [i_2 - 1] [i_2 - 1]) % (((/* implicit */long long int) ((/* implicit */int) (signed char)83))))))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-81)) && (((/* implicit */_Bool) ((((_Bool) arr_5 [0ULL] [i_0] [i_1])) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_0])))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1] [i_0])) ? (arr_7 [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    var_15 &= ((/* implicit */unsigned char) ((-2147483646) * (((/* implicit */int) var_12))));
                    var_16 = ((/* implicit */unsigned long long int) ((_Bool) arr_2 [i_0]));
                    var_17 = ((/* implicit */int) ((3741745595U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                }
                for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    var_18 = ((((/* implicit */_Bool) (+(((int) arr_4 [i_0] [i_0] [i_0]))))) ? (((int) ((unsigned short) var_3))) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)51060)) ? (((/* implicit */unsigned long long int) 576460752303423487LL)) : (var_8))) > (((var_8) * (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_1] [i_5]))))))));
                    arr_20 [i_0] [i_1] [i_0] = ((/* implicit */int) ((_Bool) ((long long int) (_Bool)1)));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 2; i_6 < 17; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 1; i_7 < 19; i_7 += 2) 
                        {
                            {
                                var_19 |= ((/* implicit */unsigned int) min((((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-95)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)20708)))) > (((/* implicit */int) var_6))))), (((((/* implicit */int) (signed char)85)) + (((/* implicit */int) ((unsigned short) arr_24 [i_0] [(_Bool)1])))))));
                                var_20 = ((/* implicit */unsigned int) ((int) var_2));
                                arr_26 [i_0] [5] [i_5] [i_0] [i_5] = min((((unsigned long long int) var_8)), ((+(max((var_8), (((/* implicit */unsigned long long int) arr_23 [i_0])))))));
                                arr_27 [i_0] [i_0] [17ULL] [i_7 + 1] [i_0] = arr_3 [i_0];
                            }
                        } 
                    } 
                }
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned char)12), (((/* implicit */unsigned char) arr_2 [i_0]))))) ? ((~(((((/* implicit */_Bool) 2228644213U)) ? (arr_19 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((unsigned long long int) var_1)))))));
                arr_28 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_14 [i_0] [i_1] [3ULL]))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_11);
}
