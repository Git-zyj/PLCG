/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166252
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
    var_18 += ((/* implicit */signed char) ((max(((+(var_1))), (((/* implicit */unsigned int) ((((/* implicit */int) var_15)) % (((/* implicit */int) (signed char)-1))))))) % (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)0)))))))));
    var_19 &= ((/* implicit */int) var_10);
    var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) < (((204947526) ^ (((/* implicit */int) (signed char)-111)))))))) % (((unsigned int) ((unsigned long long int) var_5)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                for (int i_3 = 1; i_3 < 7; i_3 += 2) 
                {
                    {
                        arr_12 [i_1] [i_1] [i_1] [i_0] [i_1] [i_1] = max((((/* implicit */unsigned int) min((((/* implicit */int) arr_3 [i_0])), (((((/* implicit */_Bool) (short)18740)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)-70))))))), (((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_7 [i_0] [i_1] [i_2 + 1] [i_2 + 1])))) ^ ((+(1124140084U))))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_10 [i_2 - 1] [i_3 + 2])))) ? ((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) < (var_1)))))) : (((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (_Bool)0))))))));
                        var_21 = ((/* implicit */_Bool) ((signed char) max((((((/* implicit */_Bool) 204947522)) ? (1124140084U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (signed char)-1))))))));
                    }
                } 
            } 
        } 
        arr_14 [6U] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [(unsigned short)8])) ? (((((/* implicit */int) (unsigned short)22909)) * (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)-22))));
        var_22 = min((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-82))))) ? (((/* implicit */unsigned int) 5)) : (arr_10 [i_0] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 268435455ULL)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned char)254))))));
        var_23 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 451485507U)) ? (arr_2 [i_0] [i_0] [i_0]) : (204947522)))));
        var_24 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */unsigned long long int) 0)) * (((unsigned long long int) 930123393)))));
    }
}
