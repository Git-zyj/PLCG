/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171381
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-29383)) ? (((/* implicit */int) (unsigned short)17635)) : (((/* implicit */int) ((unsigned short) (unsigned short)26282)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 4; i_4 < 11; i_4 += 4) 
                        {
                            var_13 &= ((/* implicit */long long int) (unsigned short)9090);
                            var_14 += ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32753)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_4])) : (((/* implicit */int) (unsigned short)56445))));
                            var_15 = (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_1] [i_3] [i_3] [i_1]))))));
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) -2123663344)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)47906))));
                            arr_14 [(unsigned char)0] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */int) (!(arr_6 [(short)3] [i_4] [i_4 + 2] [i_3 - 1])));
                        }
                        var_17 ^= (~(((/* implicit */int) (short)-29363)));
                        var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)17339))));
                        arr_15 [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_3 - 1] [(short)7] [i_3] [i_3] [10] [i_3 + 1]))));
                    }
                    var_19 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)13881))) >= (0U)))) > (((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))));
                    var_20 = ((/* implicit */unsigned short) arr_12 [(unsigned short)1] [i_1] [i_1] [i_2] [2U]);
                    var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2] [i_2]))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)39275)) : (((/* implicit */int) (unsigned short)21874))))), (max((var_10), (((/* implicit */unsigned long long int) var_4))))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) ^ (17U)))) ? (((/* implicit */int) (unsigned short)9091)) : (var_4)))));
    var_23 = ((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (max((((/* implicit */unsigned short) ((((/* implicit */int) (short)13876)) >= (((/* implicit */int) (unsigned short)47900))))), ((unsigned short)56471)))));
}
