/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14619
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
    var_11 = ((((/* implicit */_Bool) (short)-9618)) ? (4611686018427387904LL) : (((/* implicit */long long int) 1908817699U)));
    var_12 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)16384))))) ? ((~(8191U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7134)))))) ? (((unsigned int) var_3)) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)58401)) : (((/* implicit */int) (unsigned char)15))))), (min((((/* implicit */unsigned int) (unsigned short)12709)), (var_5)))))));
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)28672)) ? (((/* implicit */int) (unsigned short)12709)) : (((/* implicit */int) (unsigned short)43874))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((arr_2 [i_0] [i_0]) - (arr_2 [i_0] [i_0])))) : (max((var_1), (17441776977791791893ULL)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_14 ^= ((/* implicit */unsigned short) max((3696417818U), (((/* implicit */unsigned int) (_Bool)1))));
                    var_15 = ((/* implicit */unsigned int) arr_4 [10U] [i_1] [i_1]);
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(var_8)))) << (((((((/* implicit */int) (unsigned short)7134)) / (((/* implicit */int) (unsigned char)221)))) - (31)))));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        {
                            var_17 ^= ((/* implicit */unsigned long long int) ((max((arr_12 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_0)))) != (((/* implicit */unsigned long long int) ((unsigned int) 2386149597U)))));
                            var_18 = ((/* implicit */unsigned int) ((1125899906842616LL) < (2199023255551LL)));
                        }
                    } 
                } 
                arr_18 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 268304384U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)35))) : (2199023255548LL))), (((/* implicit */long long int) ((arr_5 [i_3]) < (((/* implicit */long long int) var_10)))))));
                var_19 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [(unsigned char)1] [i_0] [i_0]))))) > (2386149567U))))));
            }
            var_20 = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned short)34556));
        }
    }
}
