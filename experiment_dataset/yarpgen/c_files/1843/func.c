/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1843
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_10)))))))) + ((-(((var_7) - (var_6)))))));
    var_18 = (((+(var_13))) / (((/* implicit */int) var_1)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_19 = ((/* implicit */short) ((((/* implicit */int) var_11)) - (((/* implicit */int) (unsigned short)65519))));
        var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)0))));
        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -804462606))));
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_22 *= ((/* implicit */signed char) ((arr_0 [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
            var_23 = ((/* implicit */short) (!((_Bool)1)));
        }
        for (long long int i_2 = 1; i_2 < 22; i_2 += 1) 
        {
            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (+(((((var_13) + (2147483647))) >> (((((/* implicit */int) var_11)) + (26))))))))));
            var_25 = ((((/* implicit */int) (!(var_4)))) != ((+(((/* implicit */int) (unsigned short)22913)))));
            var_26 += (!(((/* implicit */_Bool) 804462606)));
            var_27 = ((/* implicit */unsigned short) ((7149639182175973035LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        }
        for (long long int i_3 = 3; i_3 < 22; i_3 += 1) 
        {
            var_28 += ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)16479)) != (((/* implicit */int) (unsigned short)25204))));
            var_29 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)13572))) - (-5553813314683583957LL)));
        }
        for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_4])) >= (((/* implicit */int) var_14))));
            var_31 &= ((/* implicit */_Bool) (+(arr_0 [i_0])));
            arr_13 [(unsigned short)2] = ((/* implicit */int) (!(((/* implicit */_Bool) -416267392))));
        }
    }
    var_32 = ((/* implicit */unsigned short) var_3);
}
