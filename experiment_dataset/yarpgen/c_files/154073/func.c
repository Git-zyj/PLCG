/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154073
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
    var_14 = ((/* implicit */int) min((var_14), (((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)60325)) << (((/* implicit */int) var_1))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (-1)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_15 += (!(((/* implicit */_Bool) max((((unsigned int) var_9)), (((((/* implicit */_Bool) 1538840365)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (871654335U)))))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
                {
                    arr_7 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (signed char)-16)), (8121896520581170576ULL)));
                    var_16 += ((/* implicit */int) ((long long int) max((((/* implicit */unsigned int) (signed char)-46)), ((~(arr_2 [i_0]))))));
                }
                for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned int) ((min(((+(arr_8 [i_1]))), (((/* implicit */long long int) min(((_Bool)1), ((_Bool)1)))))) * (arr_8 [i_1])));
                    arr_11 [5] [i_0] [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4LL)) ? (((/* implicit */long long int) ((unsigned int) (unsigned short)5582))) : (arr_8 [i_0])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) : (arr_8 [i_0])))) ? (max((var_6), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))))));
                }
                for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
                {
                    arr_14 [i_0] [i_0] [4LL] = (_Bool)1;
                    var_18 ^= ((/* implicit */int) max((max((((((/* implicit */_Bool) (signed char)127)) ? (arr_12 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)59))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_5 [i_0] [i_1] [i_0] [i_4])), (-1LL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_4] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [(unsigned short)14] [(unsigned short)14]))) : (max((arr_8 [i_1]), (arr_8 [i_0]))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 22; i_6 += 2) 
                        {
                            {
                                arr_21 [i_0] [(_Bool)1] [22LL] [i_1] [14LL] [(signed char)14] [i_6 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_15 [i_5] [(unsigned short)6] [(unsigned short)6] [i_4] [i_6 - 1] [i_6 - 1]) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_5] [i_6] [i_6 - 1] [i_0])) : (((/* implicit */int) var_0))))) ? ((+(((/* implicit */int) arr_15 [i_0] [i_1] [i_6] [i_5] [i_6 - 1] [i_5])))) : (((/* implicit */int) max(((signed char)127), ((signed char)127))))));
                                var_19 -= ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_19 [10LL] [i_0] [i_0] [i_5] [i_6 + 1] [i_6 - 1] [i_6 + 1])) && (((/* implicit */_Bool) 8683292408146566440LL))))));
                                var_20 = ((/* implicit */short) arr_15 [i_0] [5U] [i_0] [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                    var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(8683292408146566428LL)))) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_4])) ? (arr_13 [i_0] [i_1] [22U]) : (arr_8 [i_0])))) : (((/* implicit */unsigned long long int) min((((((/* implicit */int) (signed char)-112)) * (((/* implicit */int) (signed char)31)))), ((-(((/* implicit */int) (signed char)62)))))))));
                }
            }
        } 
    } 
}
