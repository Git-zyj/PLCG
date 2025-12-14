/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1353
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned char) arr_0 [(unsigned char)8]);
            var_15 = ((/* implicit */short) (+(((/* implicit */int) ((short) min((0U), (((/* implicit */unsigned int) (_Bool)1))))))));
            var_16 = ((((/* implicit */_Bool) ((arr_0 [0LL]) * (((/* implicit */long long int) 0U))))) ? ((~(arr_0 [i_0]))) : (arr_0 [(unsigned char)17]));
        }
        var_17 = min((((/* implicit */long long int) ((arr_2 [i_0]) / (arr_2 [i_0])))), (arr_0 [(unsigned char)19]));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_7 [7U] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((signed char) arr_4 [(signed char)12]))), (arr_4 [(_Bool)1])));
        arr_8 [7] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [(unsigned char)20])), (arr_0 [(unsigned char)10])))) ? (min(((~(arr_4 [(unsigned short)0]))), (arr_0 [(short)12]))) : (min((((/* implicit */long long int) arr_1 [(unsigned char)14])), (min((arr_0 [(short)3]), (((/* implicit */long long int) arr_1 [14LL]))))))));
    }
    /* LoopSeq 3 */
    for (long long int i_3 = 0; i_3 < 22; i_3 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((~(1761109939))), (((/* implicit */int) ((short) 0U)))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_3])) * (((/* implicit */int) max((arr_1 [i_3]), (arr_1 [i_3]))))))) : (((((/* implicit */_Bool) max((var_3), (((/* implicit */short) (_Bool)1))))) ? (min((((/* implicit */long long int) (unsigned short)62955)), (8679934966194462474LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_3 [4ULL] [(unsigned char)3] [(unsigned char)6]))))))));
        var_19 = arr_0 [(_Bool)1];
        var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [(unsigned char)11])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [7LL] [(unsigned char)18] [(_Bool)1])) ? (arr_9 [1ULL] [17U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))))));
    }
    for (long long int i_4 = 0; i_4 < 22; i_4 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) (unsigned short)2580);
        var_22 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) arr_3 [(_Bool)1] [14U] [13])) ? (((long long int) arr_9 [(unsigned char)9] [(unsigned char)20])) : (arr_0 [(unsigned short)20]))));
        arr_14 [(unsigned char)21] = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) (-(((/* implicit */int) arr_13 [(_Bool)1]))))), (max((arr_11 [(_Bool)1]), (((/* implicit */long long int) var_13)))))), (((/* implicit */long long int) ((_Bool) arr_1 [i_4])))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 21; i_5 += 2) 
    {
        var_23 = 2729660054466014430LL;
        var_24 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)62937))));
        arr_17 [(short)16] = arr_15 [12LL];
        /* LoopSeq 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_25 = ((/* implicit */unsigned short) ((_Bool) 18319983609456677253ULL));
            var_26 = ((/* implicit */unsigned char) ((arr_15 [i_5 + 1]) ? (((/* implicit */int) arr_15 [i_5 + 1])) : (((/* implicit */int) arr_15 [i_5 + 1]))));
        }
        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) 
        {
            arr_23 [i_7] = ((/* implicit */long long int) ((unsigned char) (unsigned short)62955));
            var_27 = ((/* implicit */short) ((((/* implicit */int) arr_3 [8LL] [i_7] [i_7])) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
        }
        arr_24 [19LL] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
    }
}
