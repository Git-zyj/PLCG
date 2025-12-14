/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130832
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
    var_14 = (-(((/* implicit */int) var_9)));
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (!(((((/* implicit */int) ((((/* implicit */int) (signed char)33)) > (((/* implicit */int) var_4))))) <= (((/* implicit */int) ((((/* implicit */int) (signed char)-8)) == (((/* implicit */int) (unsigned short)46667))))))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((-2147483627) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1023))))))))));
        arr_3 [(signed char)10] &= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)1045)) + (min(((-(-1349644602))), ((+(((/* implicit */int) (short)12013))))))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)1010)) ? (1072489408U) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned short)979)) ? (((/* implicit */int) (unsigned short)1035)) : (((/* implicit */int) (short)-4500)))), (((1084970457) % (((/* implicit */int) (unsigned short)1015)))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 4; i_2 < 17; i_2 += 1) 
        {
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) max((1072489429U), (((/* implicit */unsigned int) (short)-8)))))));
            var_19 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)127)) ? (3666963255U) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)16)) : (((/* implicit */int) (short)31732))))))) & (((/* implicit */unsigned int) (~(((/* implicit */int) var_9)))))));
            var_20 ^= ((/* implicit */int) max((max((((/* implicit */unsigned long long int) var_1)), (arr_8 [i_2 - 3]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2 - 4])) && (((/* implicit */_Bool) (unsigned short)2373)))))));
            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))), ((~(1453129110U))))))));
            arr_9 [i_2] [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */int) (short)31725)) - (((/* implicit */int) (short)5))));
        }
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1]))))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1]))))))))) % (arr_8 [i_1])));
        var_23 = ((/* implicit */unsigned short) max((var_23), (var_12)));
    }
}
