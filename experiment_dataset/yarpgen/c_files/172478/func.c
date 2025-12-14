/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172478
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
    var_11 = ((unsigned short) var_9);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0]) >= (((((/* implicit */int) var_0)) ^ (arr_1 [i_0]))))))) <= (max((((/* implicit */long long int) max((arr_3 [i_0] [i_1] [i_1]), (((/* implicit */unsigned int) arr_4 [i_0] [i_1]))))), ((+(6703372685456882252LL)))))));
                arr_7 [i_0] = ((/* implicit */short) (+(((/* implicit */int) (signed char)-9))));
                var_12 = ((/* implicit */int) ((min((3474464469U), (((/* implicit */unsigned int) (short)-26396)))) + (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [(unsigned char)0])) || (((/* implicit */_Bool) (signed char)-9))))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) min(((+(var_8))), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 3474464452U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        arr_11 [i_2 + 1] = ((/* implicit */int) arr_3 [i_2] [i_2] [i_2 + 1]);
        var_14 -= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2]))) | ((~(674323435U)))));
    }
    for (short i_3 = 4; i_3 < 14; i_3 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_0 [i_3 + 1])))))));
            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) / (var_3)))) || (((/* implicit */_Bool) ((unsigned short) (_Bool)1)))));
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 2; i_6 < 14; i_6 += 3) 
                {
                    for (signed char i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        {
                            var_17 += ((/* implicit */short) (-(((/* implicit */int) arr_24 [i_6 - 1] [(short)5]))));
                            arr_27 [i_3] [i_3] [10ULL] [(_Bool)1] [i_3] = ((/* implicit */int) (+(((((/* implicit */_Bool) (unsigned char)172)) ? (8555555670958993128LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)13)))))));
                            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) < (var_4)))))))));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_15 [i_3] [i_4])) != (3474464469U))))) : (((8555555670958993128LL) / (((/* implicit */long long int) ((/* implicit */int) arr_16 [(signed char)1] [(signed char)1])))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (int i_8 = 1; i_8 < 13; i_8 += 3) 
            {
                arr_31 [i_8] [i_8 + 1] [3U] [12U] = (signed char)11;
                var_20 = var_2;
                var_21 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_24 [i_3 - 1] [i_8 + 2]))));
            }
            for (unsigned int i_9 = 0; i_9 < 15; i_9 += 2) 
            {
                var_22 = ((/* implicit */unsigned long long int) arr_19 [14]);
                var_23 = ((/* implicit */_Bool) var_0);
                var_24 = ((/* implicit */unsigned char) -8555555670958993128LL);
            }
            for (signed char i_10 = 3; i_10 < 14; i_10 += 4) 
            {
                var_25 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_8)))) ? (8555555670958993149LL) : (((/* implicit */long long int) ((int) (_Bool)1)))));
                arr_36 [i_4] [i_10] = ((/* implicit */long long int) ((short) arr_28 [i_3 + 1] [i_3] [i_10 - 3]));
            }
        }
        arr_37 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_25 [i_3 + 1] [i_3] [i_3] [i_3 + 1] [i_3] [i_3] [i_3])))) && (((/* implicit */_Bool) ((arr_34 [i_3 - 4] [i_3] [i_3]) - (((/* implicit */long long int) var_8)))))));
        var_26 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) ((var_8) != (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
    }
}
