/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169601
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
    var_16 = ((/* implicit */unsigned long long int) var_9);
    var_17 = ((/* implicit */signed char) var_3);
    var_18 = ((/* implicit */unsigned short) max((((/* implicit */short) (signed char)-56)), ((short)-32114)));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        var_19 = min((min((arr_1 [i_0 + 2]), (((/* implicit */int) (signed char)48)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(_Bool)1] [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_20 = (i_1 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1] [i_0 + 2] [i_1 + 1])) << (((((/* implicit */int) arr_4 [i_1] [i_0 + 2] [i_1 + 2])) - (15166)))))) ? (max((var_8), (((/* implicit */int) arr_4 [i_1] [i_0 + 1] [i_1 + 3])))) : (((/* implicit */int) min((arr_4 [i_1] [i_0 - 1] [i_1 - 1]), ((short)-32114))))))) : (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_4 [i_1] [i_0 + 2] [i_1 + 1])) + (2147483647))) << (((((((((/* implicit */int) arr_4 [i_1] [i_0 + 2] [i_1 + 2])) - (15166))) + (33914))) - (18)))))) ? (max((var_8), (((/* implicit */int) arr_4 [i_1] [i_0 + 1] [i_1 + 3])))) : (((/* implicit */int) min((arr_4 [i_1] [i_0 - 1] [i_1 - 1]), ((short)-32114)))))));
                    var_21 ^= ((((/* implicit */_Bool) (((+(((/* implicit */int) arr_4 [(_Bool)1] [i_2] [i_2])))) ^ (((((/* implicit */_Bool) (short)30729)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-30729))))))) ? (((int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-6542))))) : (((/* implicit */int) max((((/* implicit */short) max(((signed char)70), (((/* implicit */signed char) (_Bool)1))))), (arr_4 [12LL] [i_2] [12LL])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_22 = (short)32113;
                                var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((2118938884), (((/* implicit */int) var_1))))) ? (arr_2 [i_2]) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_1] [i_2] [i_3]))))))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2183762740772844730ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-70))) : (16062269783077997067ULL)))) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_1])) : ((((_Bool)1) ? (((/* implicit */int) (short)13355)) : (0))))))));
                                var_24 = ((/* implicit */int) (_Bool)1);
                                var_25 = ((/* implicit */signed char) arr_5 [i_2]);
                                var_26 = ((/* implicit */short) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)23225)) : (((/* implicit */int) arr_9 [i_0 + 2] [i_0 + 1] [i_1 + 1] [i_1] [i_1 - 1])))) % (((/* implicit */int) (short)-30722))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min(((short)-32106), (((/* implicit */short) arr_8 [i_0] [i_1] [i_2]))))))))) >= (16262981332936706907ULL)));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        var_28 = ((/* implicit */signed char) ((((/* implicit */unsigned int) min((((var_10) & (((/* implicit */int) (short)23084)))), (((/* implicit */int) arr_4 [i_5] [i_5] [i_5]))))) & (min((((arr_2 [i_5]) << (((((/* implicit */int) arr_3 [i_5] [i_5])) + (16426))))), (((/* implicit */unsigned int) min((var_13), (((/* implicit */short) arr_5 [i_5])))))))));
        var_29 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_10 [i_5])) < (((/* implicit */int) arr_10 [i_5])))) ? (min((((/* implicit */int) arr_6 [i_5] [i_5] [i_5] [(_Bool)1] [i_5])), (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_3 [i_5] [i_5])) + (16435))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
    }
}
