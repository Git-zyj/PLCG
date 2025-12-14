/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157519
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 1; i_4 < 10; i_4 += 3) 
                            {
                                arr_13 [(short)1] [(short)1] [(unsigned short)2] [i_4] [i_3] [i_3] = ((/* implicit */signed char) ((unsigned char) (+(((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_0]))))));
                                arr_14 [i_4] [i_4] [7U] [i_4] [i_4] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [(unsigned short)1] [i_3]))));
                                arr_15 [i_2] [(signed char)5] [i_2] [i_3] [i_0] [i_4] [i_4] = ((/* implicit */int) max(((~(7493943656563314442ULL))), (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)242))) | (-1499105322048139131LL))) ^ (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-58))))))))));
                            }
                            arr_16 [i_1] = ((/* implicit */int) -9223372036854775797LL);
                            var_14 = ((unsigned short) ((_Bool) arr_3 [i_1 + 1] [i_1 - 1] [i_3]));
                        }
                    } 
                } 
                var_15 = ((/* implicit */int) ((unsigned int) ((long long int) 2147483647)));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) var_1);
    var_17 ^= ((/* implicit */unsigned long long int) var_6);
    var_18 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (short)-3))))))) / ((~(((var_13) & (var_13)))))));
}
