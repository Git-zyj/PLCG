/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179785
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
    var_10 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : ((~(((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */int) (signed char)-51)) : (((/* implicit */int) (signed char)-51))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        var_11 = ((/* implicit */long long int) ((signed char) (-(var_6))));
        arr_4 [i_0] [i_0 - 2] = ((/* implicit */signed char) ((min((arr_3 [i_0 + 2]), (((/* implicit */unsigned long long int) var_3)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)-10))))));
    }
    for (int i_1 = 1; i_1 < 10; i_1 += 4) 
    {
        var_12 = ((((/* implicit */_Bool) ((signed char) arr_5 [i_1 - 1]))) ? (((/* implicit */int) (signed char)-51)) : (((/* implicit */int) arr_6 [i_1 + 1])));
        var_13 &= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((signed char) (signed char)28)), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-10)) && (((/* implicit */_Bool) arr_7 [(short)10])))))))) ? ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)62))) / (var_6))))) : ((+(((var_6) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
        var_14 = ((/* implicit */long long int) 2147483638);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_15 = ((/* implicit */int) ((((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2] [i_2]))) : (817437883944667257LL))) >> (((/* implicit */int) ((((/* implicit */int) arr_10 [i_2] [i_2])) < ((~(((/* implicit */int) (signed char)10)))))))));
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (int i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    {
                        var_16 = ((/* implicit */short) ((unsigned long long int) (-(((/* implicit */int) arr_12 [i_2])))));
                        var_17 = ((/* implicit */short) (~(2147483637)));
                    }
                } 
            } 
        } 
        var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_2])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_2]))) <= (817437883944667257LL)))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [(short)8] [(short)8])) << (((var_4) - (3992704274U)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_18 [(unsigned short)16] [i_2] [i_2] [i_2] [i_2])) >= ((-2147483647 - 1))))) : (((/* implicit */int) ((29360128) < (((/* implicit */int) var_7)))))))));
    }
}
