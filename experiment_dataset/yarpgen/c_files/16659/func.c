/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16659
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            arr_5 [i_0] [i_0] [i_1] = max((((unsigned char) min((((/* implicit */short) var_6)), (var_0)))), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) != (2997077980U)))));
            var_16 += ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32757))) <= (1297889316U)));
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                arr_9 [i_0] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)22786)))))));
                var_17 = ((/* implicit */int) ((((/* implicit */int) var_7)) == (((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) max(((signed char)-119), (var_7)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) 2997077980U)))))))));
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (signed char)116))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) - (arr_4 [7U]))) : (((/* implicit */long long int) (-(((((/* implicit */int) arr_6 [i_0] [i_0])) - (1739303892))))))));
                var_19 ^= ((/* implicit */unsigned long long int) (short)-27055);
            }
        }
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            var_20 = (-(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_2 [i_0]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (-1181429528) : (((/* implicit */int) (unsigned short)39297)))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_4 = 1; i_4 < 22; i_4 += 2) 
            {
                arr_15 [i_4 + 1] [i_4 + 1] [i_0] [i_4 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)(-127 - 1))) * (((/* implicit */int) arr_10 [i_0]))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 1; i_5 < 21; i_5 += 2) 
                {
                    for (unsigned char i_6 = 1; i_6 < 20; i_6 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) var_1);
                            arr_21 [i_0] [i_0] [i_4] [i_5 - 1] [i_6 + 3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) var_7)))));
                            arr_22 [i_0] [i_0] [i_0] [3U] [i_5 + 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_6 + 1])) ? (((/* implicit */int) arr_0 [i_6 + 1])) : (((/* implicit */int) arr_0 [i_6 + 3]))));
                            arr_23 [i_0] [i_0] [i_0 - 2] = ((/* implicit */signed char) var_12);
                            arr_24 [i_0] [10ULL] [i_4 - 1] [i_6] [i_6] [i_3] [i_6] = ((/* implicit */unsigned int) ((int) arr_16 [i_0] [i_6 + 3] [i_4 - 1] [i_0] [i_6]));
                        }
                    } 
                } 
            }
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_0] [(signed char)21])) == (((/* implicit */int) (_Bool)0))));
            arr_25 [i_3] &= ((/* implicit */int) 13073568216866065267ULL);
            var_23 ^= ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((var_12) <= (((/* implicit */long long int) ((/* implicit */int) var_7))))) ? (((((/* implicit */int) var_3)) * (-837004858))) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_8)))))))), (((arr_10 [i_3]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) var_8)) ? (arr_11 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(signed char)12])))))))));
        }
        for (long long int i_7 = 2; i_7 < 19; i_7 += 1) 
        {
            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 1181429528)))) || (((/* implicit */_Bool) (+(var_12)))))))) : (8276946163025380305ULL)));
            arr_29 [i_7 + 1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)124)) / ((+(((/* implicit */int) arr_28 [i_0] [i_0] [i_0 - 1]))))));
        }
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) == (((2997077969U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))));
        var_26 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(var_6))))));
    }
    var_27 = ((/* implicit */_Bool) var_8);
    var_28 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) ((int) var_10)))) ? (min((4294967287U), (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_15))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)119))))))));
    var_29 = ((/* implicit */signed char) ((1297889316U) <= (((/* implicit */unsigned int) ((((((/* implicit */int) var_4)) + (((/* implicit */int) var_8)))) / (((var_10) ? (((/* implicit */int) var_7)) : (var_9))))))));
    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_8)) : (-22646884))), (((/* implicit */int) (short)32763))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_4)) != ((-(-1824488402))))))) : (((((/* implicit */_Bool) ((unsigned char) 4294967285U))) ? (4294967273U) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_15), (((/* implicit */short) var_10))))))))));
}
