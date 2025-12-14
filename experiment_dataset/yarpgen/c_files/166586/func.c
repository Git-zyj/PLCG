/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166586
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
    var_12 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) -358236487))));
    var_13 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (-358236487) : (((((_Bool) (unsigned short)3848)) ? (((((/* implicit */int) var_6)) << (((((/* implicit */int) var_1)) - (5196))))) : (((/* implicit */int) min((var_2), (((/* implicit */unsigned short) var_3)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    arr_6 [i_0] = min((arr_1 [i_2]), (arr_1 [i_1]));
                    arr_7 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (!((_Bool)0)))))) < (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)59751)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned long long int) 358236487))))))));
                    arr_8 [i_0] [i_1] [(_Bool)1] [i_1] = ((/* implicit */signed char) -1225197552);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [(short)3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_2] [i_3]))) : (-3344459952871755416LL)));
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)116)) ? (((/* implicit */int) (short)21879)) : (1048176728)));
                        var_16 = ((/* implicit */signed char) ((((/* implicit */int) (short)25649)) % (((/* implicit */int) (short)32767))));
                        var_17 = ((/* implicit */signed char) ((-358236487) > (((((/* implicit */_Bool) (short)3840)) ? (((/* implicit */int) (unsigned short)51450)) : (((/* implicit */int) arr_10 [i_0]))))));
                    }
                }
                var_18 = var_1;
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    for (int i_5 = 1; i_5 < 11; i_5 += 4) 
                    {
                        {
                            arr_16 [i_0] [i_4] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)12678)) ? (((/* implicit */unsigned long long int) 1225197541)) : (arr_9 [i_0] [i_0] [i_4] [i_1] [i_5 + 3])))) ? (((/* implicit */int) min((((((/* implicit */_Bool) (short)-32767)) || (((/* implicit */_Bool) (signed char)-94)))), ((_Bool)0)))) : (865566608)));
                            var_19 = ((16725058486730482710ULL) - (((/* implicit */unsigned long long int) -1298679053)));
                            arr_17 [i_5] [i_0] [i_4] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) (_Bool)1));
                        }
                    } 
                } 
                arr_18 [i_0] [i_0] = ((/* implicit */int) (!(((((/* implicit */int) arr_2 [i_0] [i_1] [i_0])) >= (((/* implicit */int) arr_1 [i_0]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_1);
}
