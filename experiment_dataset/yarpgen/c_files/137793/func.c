/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137793
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) ((short) var_8)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((short) ((((/* implicit */int) var_2)) % (((/* implicit */int) var_7))))))));
    var_14 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))) || (((/* implicit */_Bool) max((((int) var_8)), (((((/* implicit */int) (unsigned char)1)) * (((/* implicit */int) var_12)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                for (unsigned char i_3 = 2; i_3 < 21; i_3 += 4) 
                {
                    {
                        var_15 = ((/* implicit */_Bool) max((var_15), ((!(((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_5 [i_2] [(signed char)0])) >= (((/* implicit */int) (unsigned char)255))))))))))));
                        arr_11 [i_2] [i_2] [(short)16] [i_0] = min(((+((-(((/* implicit */int) (unsigned short)8064)))))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3] [i_3 + 2] [i_2 - 1] [(unsigned char)10] [(unsigned char)10] [i_0]))))))));
                    }
                } 
            } 
        } 
        var_16 ^= ((((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_2)))))) > (((/* implicit */int) var_6)));
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) min((arr_10 [i_0] [i_0] [(signed char)13] [i_0]), (arr_10 [i_0] [i_0] [(_Bool)1] [i_0])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)196)) ? (4525097648039737149ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)59)))))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0] [(signed char)22] [i_0] [i_0] [i_0])))))))));
    }
}
