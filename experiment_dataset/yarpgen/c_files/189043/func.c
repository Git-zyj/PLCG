/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189043
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
    var_14 = ((/* implicit */unsigned short) var_9);
    var_15 = ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) (-(423022491359171607LL)))))), ((!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)126)), ((unsigned short)33669))))))));
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-28049)) ? (667966088U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 331403796U)) ? (4856343909496742971LL) : (((/* implicit */long long int) 864418682U))))) ? (((((/* implicit */_Bool) 5248652832160738982ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11)))) : ((-(((/* implicit */int) var_2))))))) : (var_7));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        arr_3 [4U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(max((((/* implicit */long long int) (unsigned short)0)), (7689573514992321205LL)))))) ? ((-(((long long int) arr_0 [i_0])))) : (((((/* implicit */_Bool) arr_1 [i_0] [(unsigned short)6])) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (1301916950864623396LL))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65525))) - (arr_1 [i_0] [i_0])))))));
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (~((-(((/* implicit */int) (short)-12330)))))))));
    }
    for (signed char i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_18 = max((var_8), ((+(min((((/* implicit */unsigned long long int) (unsigned char)13)), (var_9))))));
        arr_6 [i_1] = (~(((((/* implicit */_Bool) ((var_1) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [10ULL]))) : (4LL)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_2 [4LL])) : (16466751777975319542ULL))) : (12630349009871183234ULL))));
    }
    for (signed char i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
    {
        arr_9 [9U] [9U] = ((/* implicit */short) arr_5 [5U]);
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            for (unsigned short i_4 = 1; i_4 < 11; i_4 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) arr_10 [i_2] [i_2]);
                    arr_16 [i_2] [i_4] [i_4] [i_2] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_12 [i_4] [(_Bool)1] [i_4 + 2])))) ? (((((/* implicit */_Bool) arr_12 [i_3] [1ULL] [i_4 + 2])) ? (arr_12 [5U] [(signed char)9] [i_4 + 2]) : (arr_12 [2ULL] [2ULL] [i_4 + 2]))) : (arr_12 [12LL] [2ULL] [i_4 + 2])));
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-69)) ? (14019828551817795732ULL) : (((/* implicit */unsigned long long int) -2230516490410769282LL)))))));
                    arr_17 [i_2] [2LL] [i_4] [2LL] = (~(0U));
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) (~((-(arr_15 [i_2] [(short)8] [i_2])))))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) min(((-(var_9))), (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) << (((var_10) - (91688933U)))))) ? (min((((/* implicit */unsigned long long int) (unsigned short)14789)), (arr_20 [i_2] [i_2] [i_2] [i_2]))) : (((/* implicit */unsigned long long int) 1394934131U)))))))));
                    arr_24 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_2] [i_5])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0)))) ^ (((/* implicit */int) (unsigned short)3063))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 13; i_7 += 4) 
        {
            for (long long int i_8 = 1; i_8 < 10; i_8 += 2) 
            {
                {
                    arr_29 [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) arr_28 [i_2] [i_2] [i_8]);
                    arr_30 [0U] [(short)4] [i_8] [3U] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6969382298263771502ULL)) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) (_Bool)1))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [0LL] [9LL] [9LL])))));
                }
            } 
        } 
    }
}
