/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147314
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_20 = ((/* implicit */long long int) ((((((/* implicit */int) ((arr_1 [i_0] [i_0]) > (arr_1 [i_0] [i_0])))) == (((/* implicit */int) (!(((/* implicit */_Bool) 1758081975523916113ULL))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) <= (((arr_1 [i_0] [i_0]) >> (((arr_1 [i_0] [i_0]) - (17901480062395425409ULL))))))))) : (2819546054U)));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)145)), (((unsigned long long int) var_4))))) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_12))))));
        var_21 = arr_0 [i_0];
        var_22 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))));
    }
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        var_23 -= ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)0))))) >= (var_19))) ? (((((/* implicit */_Bool) (unsigned short)3072)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) != (arr_3 [i_1]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_1 [i_1] [i_1]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 4) 
        {
            for (long long int i_3 = 4; i_3 < 17; i_3 += 3) 
            {
                {
                    var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) max((arr_3 [i_1]), (((/* implicit */unsigned long long int) (~(arr_4 [i_1] [i_1])))))))));
                    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (var_2))), (((/* implicit */unsigned long long int) max(((unsigned short)3072), ((unsigned short)62464))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((max((var_6), (((/* implicit */short) (unsigned char)193)))), (((/* implicit */short) ((unsigned char) (unsigned char)128))))))) : (max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) -129001163)), (arr_10 [i_3 - 4] [i_3] [i_3])))), (max((var_10), (((/* implicit */unsigned long long int) var_5)))))))))));
                    var_26 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) max((arr_5 [i_2]), (var_13))))))), (((((/* implicit */_Bool) arr_9 [i_2 - 1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | (var_10)))))));
                    arr_11 [i_1] [i_2] = ((/* implicit */short) (_Bool)0);
                    arr_12 [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) var_2);
                }
            } 
        } 
    }
    var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_14)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-8))))) : (17235691849720447234ULL))))));
}
