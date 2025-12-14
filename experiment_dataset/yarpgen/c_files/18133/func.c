/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18133
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : ((-(540119623)))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)15681))))) + ((~(var_17)))));
    }
    for (unsigned char i_1 = 2; i_1 < 14; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 16; i_2 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */long long int) arr_0 [i_1]);
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 1346108034U)) ? (((/* implicit */int) arr_13 [i_1] [i_2] [i_3] [i_3])) : ((-(((/* implicit */int) (unsigned short)49854)))))))));
                var_23 = arr_12 [i_1] [i_1] [i_2] [i_1];
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    var_24 = ((/* implicit */long long int) (-((+((+(((/* implicit */int) (unsigned char)46))))))));
                    var_25 = ((/* implicit */unsigned char) (~(22668587535000789LL)));
                    var_26 *= ((/* implicit */unsigned int) (signed char)-117);
                }
            }
            for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
            {
                var_27 += ((/* implicit */unsigned long long int) (short)63);
                var_28 = ((/* implicit */unsigned long long int) (-((-(((((/* implicit */_Bool) (short)61)) ? (((/* implicit */int) arr_18 [(short)3] [i_1] [(short)6])) : (((/* implicit */int) (short)14365))))))));
                var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_2] [i_2] [i_2]))))) ? (((/* implicit */int) var_9)) : ((-(((/* implicit */int) (short)-63)))))))))));
                var_30 = ((((/* implicit */_Bool) ((short) ((((/* implicit */unsigned long long int) arr_19 [i_2])) + (arr_5 [i_2]))))) ? (((((/* implicit */_Bool) (+(var_11)))) ? (var_8) : (((/* implicit */long long int) (-(((/* implicit */int) var_7))))))) : (((/* implicit */long long int) 5758242U)));
                var_31 = ((/* implicit */unsigned char) var_10);
            }
            var_32 = ((/* implicit */short) var_11);
        }
        for (int i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
        {
            var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) var_1))));
            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) var_0))));
            var_35 = ((/* implicit */signed char) min((var_35), (arr_17 [i_6])));
        }
        var_36 ^= ((signed char) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_14)))))));
        var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) ((short) (~((-(var_4)))))))));
        var_38 = (+(((/* implicit */int) var_12)));
        arr_22 [i_1] = ((/* implicit */unsigned short) ((unsigned int) (-((~(arr_0 [i_1]))))));
    }
    var_39 = (-(((/* implicit */int) var_18)));
}
