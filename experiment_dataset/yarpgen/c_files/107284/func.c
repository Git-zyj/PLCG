/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107284
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
    var_16 &= ((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_11)) % (var_0)))) ? (((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
    var_17 = ((/* implicit */unsigned char) var_9);
    var_18 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) var_3))))))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) var_0);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-82)) + (((/* implicit */int) var_15))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_0] [(_Bool)1] [i_0])) * (((/* implicit */int) var_2))))) : (max((var_6), (((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0]))))))));
                        var_20 = ((/* implicit */unsigned int) (~(arr_9 [i_0] [(_Bool)1] [7U] [i_3])));
                        var_21 = ((/* implicit */unsigned long long int) arr_0 [i_3] [i_3]);
                        arr_12 [i_1] [i_0] = ((/* implicit */unsigned char) var_1);
                    }
                } 
            } 
        } 
        var_22 ^= ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [(unsigned short)0]))) : (var_5))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_1)))))))), (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) * ((~(var_5)))))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_12)))))) ? (((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0])) ? (max((((/* implicit */long long int) var_7)), (arr_1 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) max((var_2), ((unsigned char)72))))))) : (((/* implicit */long long int) max((((var_6) * (var_12))), (((((/* implicit */_Bool) var_1)) ? (var_12) : (((/* implicit */unsigned int) -1268841298)))))))));
        var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (((unsigned int) var_6)))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_14 [10LL])), (var_0)))) ? (var_0) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) var_2))) % (((((/* implicit */_Bool) (unsigned short)32199)) ? (((/* implicit */int) arr_13 [i_4])) : (((/* implicit */int) arr_14 [(short)8])))))))));
        var_26 = ((/* implicit */_Bool) var_13);
    }
    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        var_27 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) 1268841297))))) : (((/* implicit */int) ((_Bool) 1268841301)))))) * ((~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_6)))))));
        arr_17 [9LL] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) ((signed char) (short)-31903))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)49995)) : (((/* implicit */int) arr_13 [i_5]))))))) ? (arr_9 [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
    }
}
