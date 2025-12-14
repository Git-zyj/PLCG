/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100958
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)65535);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            var_20 ^= ((/* implicit */signed char) (~(((/* implicit */int) min((((unsigned char) var_10)), (((/* implicit */unsigned char) ((((/* implicit */int) var_12)) <= (((/* implicit */int) (unsigned short)65518))))))))));
            var_21 &= ((/* implicit */unsigned int) arr_4 [4] [i_1]);
        }
        /* LoopSeq 1 */
        for (short i_2 = 1; i_2 < 12; i_2 += 4) 
        {
            var_22 = ((/* implicit */short) (+(((/* implicit */int) arr_3 [i_0 + 2]))));
            var_23 += ((((/* implicit */int) (unsigned short)20)) % (((int) max(((-2147483647 - 1)), (((/* implicit */int) (unsigned short)48534))))));
        }
    }
    for (int i_3 = 1; i_3 < 23; i_3 += 4) 
    {
        arr_13 [i_3] [i_3 - 1] = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */unsigned short) ((short) arr_10 [i_3]))), (((unsigned short) var_0))))) >> (((-2147483638) + (2147483645)))));
        arr_14 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)31)) && (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) min(((unsigned short)10114), (((/* implicit */unsigned short) (_Bool)1)))))))));
    }
    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        var_24 = var_19;
        /* LoopNest 2 */
        for (unsigned char i_5 = 3; i_5 < 10; i_5 += 2) 
        {
            for (signed char i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_25 *= (_Bool)1;
                        var_26 ^= ((/* implicit */unsigned short) min(((((+(((/* implicit */int) arr_23 [i_4] [6U] [i_4] [6U])))) <= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) >= (1330597798722116389LL)))))), (arr_11 [i_7])));
                    }
                    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_5 [i_4]), (arr_4 [i_4] [i_4]))))))) * (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_1)))))))))));
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned short) ((min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1))))))) + (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (var_17)))))))));
        var_29 = ((/* implicit */int) ((unsigned short) ((int) min((((/* implicit */unsigned short) arr_21 [i_4] [i_4] [i_4])), (var_13)))));
        var_30 = ((/* implicit */unsigned char) arr_23 [i_4] [i_4] [i_4] [i_4]);
    }
    var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
    var_32 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) min((var_18), (((/* implicit */unsigned short) (unsigned char)0))))))), ((+((~(((/* implicit */int) (_Bool)0))))))));
}
