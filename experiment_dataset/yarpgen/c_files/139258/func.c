/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139258
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
    var_11 = ((/* implicit */signed char) var_8);
    var_12 = ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)63))) | (3120317882U)));
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (short)0))));
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (~(arr_0 [i_0] [i_0]))))));
        var_16 = ((/* implicit */long long int) (+(min((var_7), (((/* implicit */unsigned int) var_6))))));
    }
    for (short i_1 = 2; i_1 < 19; i_1 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (-(min((4294967290U), (((/* implicit */unsigned int) (short)0)))))))));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(signed char)9])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) var_9))))))) ? (((/* implicit */int) arr_1 [4ULL] [(signed char)18])) : ((+(arr_3 [i_1 + 1])))));
            arr_8 [i_2] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_1 [i_1 - 2] [6ULL])) <= (((/* implicit */int) (signed char)112)))))));
            var_19 = ((/* implicit */_Bool) (+(((1612922808880601876ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
        }
    }
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) min((((arr_12 [i_3 + 1]) - (arr_12 [i_3 + 1]))), ((+(arr_12 [i_3 + 1]))))))));
        /* LoopSeq 1 */
        for (long long int i_4 = 2; i_4 < 21; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                for (unsigned int i_6 = 4; i_6 < 19; i_6 += 2) 
                {
                    {
                        var_21 = ((2147483628) | (((/* implicit */int) arr_17 [i_4] [i_5] [i_5])));
                        var_22 = ((/* implicit */int) (!(arr_16 [i_3] [i_3 + 1] [i_6 - 4])));
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) var_2))));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_3 + 1] [i_4] [2LL] [i_4 + 2])))))) <= (((unsigned long long int) arr_11 [(_Bool)1])))))));
            var_25 &= ((/* implicit */long long int) (_Bool)0);
        }
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_26 += ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_7] [(unsigned char)14]))) > (1174649414U)))) + (((/* implicit */int) arr_9 [i_7] [(unsigned short)10]))));
        arr_25 [i_7] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((((/* implicit */int) (short)-15583)) + (2147483647))) >> (((arr_0 [i_7] [i_7]) - (6211283991372930017LL)))))), (((var_10) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16383))) : (arr_0 [i_7] [i_7])))));
    }
    var_27 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) && (var_9))) ? (((var_3) % (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) || (((/* implicit */_Bool) min((((var_9) ? (((/* implicit */int) (short)12305)) : (((/* implicit */int) (_Bool)0)))), (var_0)))));
}
