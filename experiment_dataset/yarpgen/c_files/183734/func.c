/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183734
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
    var_19 = ((/* implicit */unsigned short) (signed char)90);
    var_20 = ((/* implicit */long long int) 1258280021);
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_4)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)2444)) || (((/* implicit */_Bool) var_15))))) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-9208))) : ((-(var_4)))))));
    var_22 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((unsigned char) var_5))), (min((((/* implicit */unsigned int) min((((/* implicit */int) (short)32673)), (134217728)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) : (3592933086U)))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] [4ULL] = (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4005918675U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (3592933086U)))) || (((/* implicit */_Bool) ((1833750211) & (((/* implicit */int) (unsigned char)114)))))))));
        arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_3 [i_0 + 2])) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)121))) : (2796850482U)))) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 134217709)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_14))))))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) > (((var_4) ^ (arr_3 [11])))))) | (((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1]))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_11)))))))));
        var_24 ^= ((/* implicit */short) max((137438953471LL), (((/* implicit */long long int) (signed char)104))));
    }
    for (unsigned int i_1 = 3; i_1 < 14; i_1 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */int) var_4);
        arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) ((int) min((1766200298), (var_18)))))));
        var_26 = ((/* implicit */int) var_4);
        var_27 = ((/* implicit */unsigned char) min((((((/* implicit */int) var_1)) >> (((arr_6 [i_1 + 2]) - (6613515631351643195LL))))), (134217728)));
        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(1381586213)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_6 [i_1 - 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1])))))))))) : (min((min((((/* implicit */long long int) var_5)), (var_6))), (((/* implicit */long long int) ((((/* implicit */_Bool) 3027127128416361852LL)) && (((/* implicit */_Bool) arr_3 [i_1]))))))))))));
    }
    for (int i_2 = 3; i_2 < 8; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_3 = 3; i_3 < 7; i_3 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 1; i_5 < 8; i_5 += 4) 
                {
                    for (unsigned int i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((long long int) var_2))) ? (min((((/* implicit */unsigned int) arr_16 [i_2] [i_3] [i_3])), (var_4))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_3 - 3])) - (((/* implicit */int) (_Bool)1)))))))));
                            arr_22 [0LL] [i_3] [i_3] [(short)1] [i_3] = ((/* implicit */_Bool) ((short) min((((/* implicit */unsigned long long int) var_8)), (arr_7 [(_Bool)1] [(_Bool)1]))));
                            arr_23 [i_3] [(short)7] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [1]))) ^ ((-(arr_20 [i_3] [i_6])))));
                        }
                    } 
                } 
            } 
            var_30 = ((/* implicit */unsigned long long int) var_4);
        }
        arr_24 [i_2] = ((/* implicit */unsigned char) (-2147483647 - 1));
    }
    for (int i_7 = 3; i_7 < 8; i_7 += 3) /* same iter space */
    {
        arr_28 [(signed char)1] = ((/* implicit */unsigned int) arr_17 [i_7]);
        arr_29 [i_7 - 3] [i_7 - 1] = var_1;
        arr_30 [i_7 + 1] = ((/* implicit */long long int) -894849992);
        var_31 = ((/* implicit */unsigned int) var_10);
        var_32 = ((/* implicit */signed char) (_Bool)1);
    }
}
