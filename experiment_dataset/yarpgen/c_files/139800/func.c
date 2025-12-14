/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139800
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
    var_19 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) >> ((((-(var_0))) + (5135505229057097542LL)))))) || (((-807419824805790059LL) < (max((((/* implicit */long long int) var_11)), (-807419824805790063LL)))))));
    var_20 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((var_5), (((/* implicit */unsigned short) (unsigned char)254)))))) < (max((((/* implicit */long long int) var_12)), (var_6))))))));
    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) max((var_10), (((/* implicit */short) (_Bool)1)))))) / (min((var_16), (((/* implicit */unsigned int) (unsigned char)61)))))), (((/* implicit */unsigned int) ((((807419824805790059LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)230))))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_18)) <= (((/* implicit */int) var_12))))))))))))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        var_22 &= ((/* implicit */signed char) (((((~(((/* implicit */int) arr_1 [10LL] [i_0])))) != (((/* implicit */int) ((_Bool) (unsigned short)45325))))) && ((!((!(((/* implicit */_Bool) 16462735097206872775ULL))))))));
        var_23 = ((/* implicit */unsigned short) arr_0 [i_0]);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_6 [(unsigned short)1]))));
                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) (unsigned char)61)), (16462735097206872796ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32439))))))));
                var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) ((_Bool) (_Bool)1))))));
                var_27 = ((/* implicit */int) (((((((~(807419824805790068LL))) / (((/* implicit */long long int) ((arr_8 [i_0 - 1] [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247)))))))) + (9223372036854775807LL))) << (((((/* implicit */int) ((16462735097206872775ULL) >= (((/* implicit */unsigned long long int) 807419824805790074LL))))) - (1)))));
            }
            for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                var_28 = ((_Bool) (+(((/* implicit */int) arr_9 [i_0 - 1] [i_1] [(unsigned char)5] [i_3]))));
                var_29 = ((/* implicit */unsigned int) (-(16462735097206872796ULL)));
            }
            var_30 ^= ((/* implicit */int) ((((/* implicit */int) (!((_Bool)1)))) <= (((int) ((arr_10 [i_1] [(signed char)4]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6590))))))));
        }
    }
    for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
    {
        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) -74359012)))))) - ((~(arr_11 [i_4])))));
        var_32 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_12 [i_4] [i_4])) || (((/* implicit */_Bool) arr_12 [i_4] [i_4]))))))));
    }
}
