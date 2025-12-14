/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175394
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
    var_17 = ((/* implicit */int) (unsigned short)18734);
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 4; i_1 < 24; i_1 += 4) 
        {
            var_18 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18734))) < (4294967295U)));
            var_19 = ((/* implicit */long long int) ((((arr_1 [i_0] [16]) & (((/* implicit */unsigned int) -1699040558)))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)18734)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) var_12)))))));
            var_20 = ((/* implicit */int) ((arr_1 [i_0] [i_1 - 1]) & (((unsigned int) -1699040561))));
        }
        arr_5 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 1699040558)) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (var_7))), (((/* implicit */int) ((2669880330U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18721))))))));
    }
    var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1699040558)) ? (min((((/* implicit */unsigned int) (unsigned short)0)), (1048796677U))) : (((/* implicit */unsigned int) -2108210133))))) ? (((((/* implicit */_Bool) 2108210125)) ? (((/* implicit */int) var_12)) : ((~(0))))) : (((/* implicit */int) ((unsigned short) 9221856764121834887LL))));
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                {
                    var_22 = (+(2056745255U));
                    arr_16 [i_4] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) 920271683)) ? (0LL) : (((/* implicit */long long int) (+(1298907921U))))));
                    arr_17 [i_2] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */unsigned int) ((int) arr_6 [i_2] [i_3]))) : (((unsigned int) -9221856764121834888LL))));
                }
            } 
        } 
    } 
}
