/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111137
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
    var_14 |= ((/* implicit */_Bool) var_8);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_15 += ((/* implicit */short) (~(((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [(unsigned short)2] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_8))))))))));
                var_16 += ((/* implicit */long long int) var_7);
                arr_7 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1 + 1] [i_0])) : ((+(var_13)))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_2 = 3; i_2 < 9; i_2 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) (((+(4294967295U))) / (((/* implicit */unsigned int) ((/* implicit */int) (short)22937)))));
                        arr_13 [i_0] [i_0] [i_2 + 2] [i_2 - 1] [i_3] [i_2 - 1] = ((((/* implicit */_Bool) (short)22953)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-15809))) : (0LL));
                        var_18 ^= ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) (unsigned char)100)) ? (((/* implicit */int) (short)-15809)) : (((/* implicit */int) (unsigned char)155)))));
                    }
                    var_19 |= ((/* implicit */long long int) var_11);
                    arr_14 [i_0] = ((/* implicit */long long int) (!(arr_9 [i_0] [i_2 + 2] [i_0] [i_0])));
                }
                /* vectorizable */
                for (unsigned char i_4 = 3; i_4 < 9; i_4 += 2) /* same iter space */
                {
                    arr_17 [6LL] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((var_6) ? (((/* implicit */int) arr_6 [i_0] [i_1])) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_0])))));
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((-1633261463) - (((/* implicit */int) (unsigned char)106))))) ? (((/* implicit */int) (short)16078)) : (((/* implicit */int) (signed char)78)))))));
                    arr_18 [i_1] [i_1 + 1] [i_0] [i_0] = ((/* implicit */unsigned char) 9223372036854775807LL);
                }
                /* vectorizable */
                for (unsigned char i_5 = 3; i_5 < 9; i_5 += 2) /* same iter space */
                {
                    var_21 = ((/* implicit */_Bool) (short)15828);
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (~((-(-2599348453882156398LL))))))));
                    var_23 ^= ((/* implicit */short) ((((/* implicit */int) (unsigned char)241)) * (((/* implicit */int) (short)14701))));
                }
                var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_7)))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (var_5) : (((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_7))))))), (((/* implicit */int) var_7)))))));
}
