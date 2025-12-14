/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151837
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) arr_1 [i_0]))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) var_18);
        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_1 [i_0])) != ((+(((/* implicit */int) arr_1 [i_0])))))) ? (max((((arr_2 [(unsigned char)4]) >> (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (short)-26220)) : (((/* implicit */int) arr_1 [i_0]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (arr_0 [i_0])))) <= (((/* implicit */int) arr_1 [i_0]))))))));
        var_21 *= ((/* implicit */short) arr_2 [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 20; i_2 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_3 = 2; i_3 < 17; i_3 += 3) 
            {
                for (short i_4 = 2; i_4 < 19; i_4 += 2) 
                {
                    {
                        arr_16 [i_1] [i_1] = ((/* implicit */unsigned int) (+(arr_7 [i_1])));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(arr_8 [i_4])))), ((+(arr_14 [i_1])))))) ? (arr_13 [i_1] [i_1] [i_2] [(_Bool)1] [(_Bool)1] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1])))));
                        arr_17 [i_1] = ((((arr_5 [i_2] [i_1]) / (arr_5 [i_3 - 2] [i_4 - 2]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) min((((/* implicit */signed char) var_16)), (var_7)))) != (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))));
                    }
                } 
            } 
            var_23 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((arr_13 [i_1] [i_1] [i_1] [(short)15] [i_2] [i_2]) % (((/* implicit */unsigned long long int) arr_10 [i_1] [(signed char)18] [i_2])))))))));
            arr_18 [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) (+(arr_14 [i_1])))) ? (arr_5 [i_1] [(unsigned short)14]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) << (((arr_13 [i_2] [i_2] [i_2] [i_1] [i_1] [i_1]) - (423599614059274748ULL)))))))) != (((/* implicit */unsigned long long int) max((((/* implicit */int) ((arr_9 [i_2] [i_2] [i_1] [i_1]) == (((/* implicit */long long int) arr_10 [i_1] [i_2] [i_2]))))), (max((-1293961308), (((/* implicit */int) (signed char)-1)))))))));
        }
        for (long long int i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
        {
            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (~(max((arr_9 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */long long int) (_Bool)1))))))) ? (max((arr_10 [i_1] [i_1] [i_5]), (arr_10 [i_5] [(signed char)2] [5ULL]))) : (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_1]))))) % (arr_7 [i_1]))))));
            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967294U)) ? (((/* implicit */int) (unsigned short)23161)) : (((/* implicit */int) (short)-26210))));
            var_26 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_12 [i_1])) != (((/* implicit */int) arr_6 [i_1])))) ? (((/* implicit */int) ((arr_14 [i_1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1])))))) : (((int) arr_13 [i_5] [11U] [i_5] [11U] [i_1] [i_1]))));
        }
        var_27 ^= ((/* implicit */unsigned short) max((max((arr_20 [i_1]), (arr_20 [i_1]))), (((/* implicit */signed char) ((((/* implicit */int) arr_20 [i_1])) < (((/* implicit */int) arr_20 [i_1])))))));
        var_28 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((arr_20 [i_1]), (arr_20 [i_1]))))));
    }
    var_29 -= ((/* implicit */unsigned long long int) var_17);
    var_30 ^= ((/* implicit */int) (((-(((/* implicit */int) var_10)))) == ((-(((/* implicit */int) var_11))))));
}
