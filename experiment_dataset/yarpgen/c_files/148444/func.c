/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148444
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
    var_17 &= ((/* implicit */unsigned long long int) 1519497226U);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned int) min((var_18), ((~(max((2775470070U), (1948473116U)))))));
                var_19 = ((/* implicit */unsigned int) min((var_19), ((+((((+(3256651685U))) - (1358469163U)))))));
                arr_5 [4U] |= ((/* implicit */short) ((((/* implicit */_Bool) (-(2346494180U)))) ? (var_0) : (((/* implicit */int) (unsigned char)0))));
                var_20 = ((/* implicit */unsigned int) (-((~(var_6)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 3; i_2 < 10; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                {
                    var_21 ^= ((/* implicit */unsigned int) (((+((-(var_16))))) != (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((2775470069U) - (((/* implicit */unsigned int) var_0))))))));
                    var_22 |= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)120)) ? (1986349497U) : (2775470069U))), (((/* implicit */unsigned int) ((0) <= (((/* implicit */int) var_7)))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned char) (~((-((((_Bool)1) ? (7U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)18)))))))));
                        var_24 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) (_Bool)1)), (var_4))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1374752266))))))));
                    }
                    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)149))) < (((((/* implicit */_Bool) 1519497219U)) ? (2775470069U) : (var_10))))))))));
                }
            } 
        } 
    } 
}
