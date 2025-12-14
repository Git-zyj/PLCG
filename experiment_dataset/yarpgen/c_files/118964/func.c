/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118964
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
    var_15 = ((/* implicit */short) var_14);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_16 ^= ((/* implicit */short) (signed char)127);
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned short)30123), (((/* implicit */unsigned short) arr_1 [i_0] [i_0]))))) - (((/* implicit */int) arr_2 [i_1] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_13), (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_3))))) : (var_7)));
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? ((-(((/* implicit */int) (unsigned short)62229)))) : (((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) (unsigned short)47694)) : (-1740403029)))));
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max((1152921504606846975LL), (((/* implicit */long long int) arr_3 [i_0] [i_1]))))))) || (((/* implicit */_Bool) (((-(165334150U))) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-44))))))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_2 = 1; i_2 < 15; i_2 += 4) 
        {
            var_17 = ((/* implicit */long long int) arr_1 [i_0] [7ULL]);
            var_18 = ((/* implicit */short) (((~(((/* implicit */int) (unsigned short)47284)))) + (min((((/* implicit */int) arr_7 [i_2 - 1] [i_2 + 1])), (((((/* implicit */_Bool) (unsigned short)16005)) ? (((/* implicit */int) (signed char)-89)) : (2147483626)))))));
            /* LoopSeq 1 */
            for (signed char i_3 = 1; i_3 < 14; i_3 += 2) 
            {
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_9 [(unsigned char)14] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (var_13))), (((/* implicit */int) arr_9 [(unsigned char)8] [12ULL] [i_3]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_0) : (var_0))))))) : (((/* implicit */int) ((unsigned short) (+(((/* implicit */int) var_5)))))))))));
                var_20 = ((/* implicit */_Bool) min((var_20), (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) | (((/* implicit */int) ((signed char) arr_2 [i_0] [i_0] [i_0])))))) && (((/* implicit */_Bool) ((int) var_11)))))));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (18446744073709551615ULL)));
            }
            arr_11 [i_0] [(_Bool)0] [i_2] = ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned int) max((-1063112467), (((/* implicit */int) arr_9 [i_2] [i_2] [i_2]))))), (((unsigned int) var_10))))));
        }
    }
    var_22 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (((7377006232851626980ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-2))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_9)))))))));
    var_23 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (min((((/* implicit */unsigned long long int) var_4)), (min((((/* implicit */unsigned long long int) var_8)), (var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((max(((short)-14596), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) var_4)))))));
}
