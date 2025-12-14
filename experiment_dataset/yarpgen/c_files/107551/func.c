/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107551
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
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                arr_6 [i_1 + 3] [3U] = ((/* implicit */signed char) ((int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62006))) : (331435086724900030LL))))));
                /* LoopNest 2 */
                for (short i_2 = 4; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            arr_11 [i_1 + 3] [(unsigned short)17] [i_1 + 3] [i_1 + 3] = ((/* implicit */unsigned long long int) (((+(((((/* implicit */_Bool) var_3)) ? (arr_3 [i_3] [i_1 + 4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) - (((unsigned int) arr_1 [i_0 - 2]))));
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-95))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17057629021857931797ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)90))))) : (((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30742))) : (16ULL))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_17), (((/* implicit */unsigned short) var_7))))) ? (((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) : (((536870908U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_3])))))))))))));
                            arr_12 [i_0] [14LL] [1U] [(unsigned short)8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) var_9)))))) ? (((((/* implicit */unsigned int) ((int) (unsigned short)39847))) / (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (4294967295U))))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (arr_3 [i_1 - 1] [i_0 - 2])))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] = ((/* implicit */unsigned short) (-(max((((/* implicit */int) var_10)), (((((/* implicit */int) var_7)) - (((/* implicit */int) var_0))))))));
                arr_14 [12ULL] [i_1 + 4] [(unsigned short)10] = ((/* implicit */unsigned short) ((((_Bool) (!(((/* implicit */_Bool) var_2))))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (17114752909703008544ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((arr_1 [10U]) || (((/* implicit */_Bool) (unsigned short)51606))))))))));
                var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 2]))))), ((-(var_4)))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) 331435086724900030LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_3)));
}
