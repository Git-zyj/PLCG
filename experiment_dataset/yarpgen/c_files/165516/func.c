/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165516
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_11 [i_2] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_2])))))) * (arr_6 [i_1] [i_1]))), (((long long int) max(((short)0), ((short)0))))));
                    var_17 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0] [1] [i_2])))))))) & (((((/* implicit */_Bool) ((int) var_5))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_2]))))));
                    var_18 = ((/* implicit */int) min((var_18), ((~(((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_1] [(signed char)16])) != (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [9])) : (var_15))))))))));
                    arr_12 [i_0] [(unsigned short)21] [i_2] = ((/* implicit */_Bool) arr_8 [i_0] [(short)5] [i_0]);
                    var_19 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_2] [i_1] [i_1])) << (((arr_6 [i_1] [i_1]) + (2232403635673116516LL)))))) ? (((((/* implicit */_Bool) 8422893617633503916ULL)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) (short)22)))) : (((/* implicit */int) min((((/* implicit */short) arr_3 [i_0] [i_0] [i_2])), (arr_10 [i_0] [i_1] [i_2] [(short)11])))))), (((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)31396)))) >> (((max((arr_6 [i_2] [i_0]), (((/* implicit */long long int) arr_8 [i_1] [i_1] [i_2])))) - (1490340571LL)))))));
                }
            } 
        } 
        arr_13 [i_0] [19LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) arr_1 [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (max((((/* implicit */unsigned long long int) max((arr_9 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) arr_1 [i_0]))))), (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31)))))))));
        var_20 -= ((/* implicit */unsigned short) min(((-(arr_8 [i_0] [i_0] [i_0]))), (((/* implicit */int) ((short) (!(((/* implicit */_Bool) (unsigned short)16384))))))));
        arr_14 [13ULL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [(_Bool)1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_0 [(unsigned char)7] [19U])))))))));
        var_21 = min((((unsigned char) ((unsigned short) arr_3 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned char) ((_Bool) arr_4 [i_0] [i_0] [i_0]))));
    }
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((((var_4) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)47))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned short)12690)) : (-548934839)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_3))))))))));
    var_23 = ((/* implicit */unsigned short) var_10);
    var_24 += ((/* implicit */int) ((_Bool) (-(((/* implicit */int) ((var_6) <= (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
    var_25 = ((/* implicit */long long int) max((var_14), (((/* implicit */short) (unsigned char)31))));
}
