/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133229
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
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_3 [i_0] [i_0])), (((((/* implicit */_Bool) (~(arr_5 [i_0] [i_1] [i_2] [6LL])))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)4222)) : (((/* implicit */int) (short)32752)))) : ((-(((/* implicit */int) (short)-4217))))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) /* same iter space */
                        {
                            arr_13 [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) arr_1 [i_3])) ? (1893811671U) : (arr_1 [i_3]));
                            arr_14 [i_1] [10LL] = ((/* implicit */_Bool) (unsigned short)29584);
                            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) arr_9 [i_1] [i_1] [(unsigned short)11] [3]))));
                            var_15 += ((/* implicit */unsigned short) var_3);
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (short)4218)))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)12754)) : (arr_10 [i_0] [i_1] [i_2] [11U] [11ULL] [(unsigned short)11] [i_3]))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2] [i_3])) != (arr_4 [i_5] [i_1] [i_0])))))))));
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((9223372036854775779LL) / (((/* implicit */long long int) 1398450694U))))) == (((arr_4 [i_0] [i_1] [i_2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18104)))))))) < (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) (short)421))))))));
                            var_18 = ((/* implicit */signed char) (unsigned short)29580);
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
                        {
                            arr_20 [(signed char)6] [i_3] [i_1] [i_1] [i_0] = arr_3 [i_2] [i_6];
                            var_19 -= ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)35946)), (-1785436416)))) ? ((~((((_Bool)0) ? (((/* implicit */unsigned long long int) 731956648)) : (var_11))))) : (((/* implicit */unsigned long long int) min((min((var_3), (((/* implicit */unsigned int) (short)-20)))), (min((4294967281U), (((/* implicit */unsigned int) var_4))))))));
                        }
                        arr_21 [i_1] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~((~(arr_2 [7U] [7U])))))), ((+(((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3] [(unsigned short)0] [i_2] [(short)3])) ? (arr_16 [i_3] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))))));
                        arr_22 [i_1] = ((/* implicit */long long int) var_4);
                        var_20 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [11])))) ? (1407709351U) : ((~((-(arr_1 [i_1])))))));
                        var_21 -= ((/* implicit */unsigned int) (short)(-32767 - 1));
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) ((unsigned long long int) min((((/* implicit */short) ((((/* implicit */int) (short)23305)) >= (((/* implicit */int) (short)-4207))))), (((short) var_9)))));
    var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) min((2896516601U), (((/* implicit */unsigned int) min((((/* implicit */int) (short)-32767)), (var_2))))))) : (((unsigned long long int) ((short) 2851565824U)))));
}
