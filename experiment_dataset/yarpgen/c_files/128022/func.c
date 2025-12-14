/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128022
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
    var_20 = ((/* implicit */unsigned int) (((+(((((/* implicit */int) var_6)) * (((/* implicit */int) var_16)))))) > (((/* implicit */int) var_12))));
    var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_22 = ((/* implicit */unsigned char) (~(max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) % (var_5)))), ((~(var_19)))))));
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) ((var_18) * (((/* implicit */int) var_16)))))))) ? (((/* implicit */int) arr_1 [i_0])) : (min((((/* implicit */int) max((((/* implicit */unsigned short) (short)32760)), (arr_0 [i_0])))), (var_18)))));
        var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)0)) - (1027747890))))));
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 1; i_2 < 11; i_2 += 4) 
        {
            var_25 ^= ((/* implicit */int) var_5);
            var_26 = ((/* implicit */long long int) ((((/* implicit */int) ((var_9) >= (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))))) >> ((((+((~(((/* implicit */int) (unsigned char)141)))))) + (162)))));
            arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) var_8);
            var_27 ^= ((/* implicit */unsigned int) var_19);
        }
        arr_8 [i_1] = ((/* implicit */short) max((((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_18) - (((/* implicit */int) var_1)))))))), (arr_1 [i_1])));
        var_28 -= ((/* implicit */signed char) arr_0 [i_1]);
        arr_9 [i_1] [2LL] &= ((/* implicit */short) var_4);
        var_29 -= ((/* implicit */short) (~(((((/* implicit */int) max(((unsigned char)142), ((unsigned char)216)))) - (min((((/* implicit */int) var_1)), (arr_4 [i_1])))))));
    }
    for (int i_3 = 2; i_3 < 18; i_3 += 4) 
    {
        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((unsigned char) var_19))) : (((((/* implicit */int) arr_11 [i_3])) << (((var_17) + (1535225302547846356LL)))))))) ? (((/* implicit */int) arr_1 [(unsigned short)8])) : (((/* implicit */int) arr_1 [i_3]))));
        /* LoopNest 3 */
        for (unsigned int i_4 = 1; i_4 < 18; i_4 += 3) 
        {
            for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                for (int i_6 = 3; i_6 < 17; i_6 += 3) 
                {
                    {
                        var_31 = ((/* implicit */unsigned int) (short)-14);
                        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) var_11)))))) ? ((-(((/* implicit */int) (signed char)22)))) : (((/* implicit */int) (unsigned char)120))));
                        arr_18 [i_4] [i_6] [i_6] [i_6] = ((/* implicit */long long int) (((-2147483647 - 1)) < (-1156809573)));
                        var_33 = ((/* implicit */signed char) arr_16 [i_6]);
                        var_34 = ((/* implicit */unsigned short) arr_17 [i_3] [i_3]);
                    }
                } 
            } 
        } 
        var_35 &= ((/* implicit */short) (!(((/* implicit */_Bool) (((~(var_5))) | (((/* implicit */unsigned int) -615654337)))))));
        /* LoopSeq 1 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_36 = (~(((/* implicit */int) (unsigned char)150)));
            var_37 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) var_7)) & (((/* implicit */int) arr_0 [i_3 - 1]))))), (((var_19) ^ (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3 + 2])))))));
            var_38 = ((/* implicit */short) var_16);
            arr_22 [i_7] = ((/* implicit */unsigned short) var_11);
            var_39 *= ((/* implicit */unsigned int) (-(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))) - (var_17)))));
        }
    }
    var_40 -= ((/* implicit */unsigned int) ((((/* implicit */int) var_11)) % (((/* implicit */int) var_10))));
}
