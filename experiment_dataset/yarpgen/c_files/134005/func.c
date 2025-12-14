/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134005
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
    var_16 = var_0;
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_7 [20U] [i_1] [(unsigned char)10] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1115534425)) ? (1699760660) : (-2059718152)))) & (((((/* implicit */_Bool) arr_2 [7] [i_2 - 1] [i_2])) ? (arr_5 [i_2] [i_2 + 1] [(_Bool)1]) : (arr_5 [(_Bool)0] [i_2 + 1] [i_2 + 1])))));
                    arr_8 [i_2] [i_1] [11LL] [i_0] = ((/* implicit */long long int) (-((~(((arr_5 [i_0] [i_0] [i_2]) >> (((arr_0 [i_1]) - (1820193843)))))))));
                }
            } 
        } 
    } 
    var_17 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -2050472971)) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)62)) && (((/* implicit */_Bool) -1699760676))))) : (33546240))))));
    var_18 += ((/* implicit */unsigned short) var_15);
    /* LoopSeq 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 1; i_4 < 9; i_4 += 4) 
        {
            for (unsigned int i_5 = 2; i_5 < 8; i_5 += 2) 
            {
                {
                    arr_16 [i_3] [(_Bool)0] [0ULL] = ((/* implicit */unsigned char) (-(0)));
                    arr_17 [i_3] [0ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((arr_5 [i_5] [i_4] [(unsigned char)11]) % (arr_9 [i_3])))))) ? (arr_14 [(unsigned char)3] [(unsigned char)3] [9U]) : (((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_3])))))));
                    arr_18 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [0ULL] [i_5])) || ((!(((/* implicit */_Bool) arr_5 [i_5 + 1] [i_5 - 1] [i_5 + 2]))))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned short) ((((((((/* implicit */unsigned long long int) arr_4 [i_3] [i_3])) > (arr_5 [i_3] [i_3] [i_3]))) ? (arr_9 [i_3]) : (((/* implicit */unsigned long long int) arr_15 [i_3] [i_3] [i_3])))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_3] [i_3]))))))));
        var_20 = ((/* implicit */_Bool) max((var_20), ((((!(((/* implicit */_Bool) 4ULL)))) || ((!(((/* implicit */_Bool) arr_11 [0LL]))))))));
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)62)))))) + (((((/* implicit */_Bool) ((arr_4 [i_3] [i_3]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [i_3])))))) ? (arr_14 [(_Bool)1] [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) ((arr_3 [i_3] [10]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3]))))))))))))));
    }
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        arr_23 [i_6] = (-(((/* implicit */int) ((((((/* implicit */_Bool) arr_19 [i_6] [i_6 - 1])) ? (arr_14 [i_6] [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_6]))))) > (((/* implicit */long long int) ((/* implicit */int) ((arr_10 [(unsigned short)2] [i_6]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_6] [7] [(signed char)0])))))))))));
        arr_24 [3] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_14 [(unsigned short)0] [i_6] [i_6])) ? (2050472970) : (((((/* implicit */_Bool) 2288588402U)) ? (((/* implicit */int) (short)28672)) : (-2050472971))))) << (((arr_14 [i_6 - 1] [i_6] [i_6 - 1]) - (arr_14 [i_6 - 1] [7] [i_6 - 1])))));
    }
}
