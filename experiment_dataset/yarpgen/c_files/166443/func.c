/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166443
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_10 *= ((/* implicit */unsigned char) arr_2 [i_0]);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) 374577542)) : (arr_3 [i_0]))))));
                        var_12 = ((/* implicit */unsigned short) arr_3 [i_0]);
                        arr_11 [i_0] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)4542)) > (((/* implicit */int) arr_0 [i_0]))))) << (((((-374577541) + (374577572))) - (28)))));
                        arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned char) (~(-374577526)));
                        var_13 = ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2] [i_3])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_2] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])));
                    }
                } 
            } 
        } 
        arr_13 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (signed char)-15))))) > (6270067095643972538ULL)));
    }
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) -1644361330)) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (13875031968100988187ULL))))) : (((/* implicit */unsigned long long int) 374577542))));
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
    {
        for (signed char i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            {
                var_15 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)31616)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1644361328)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)255)))))))) : (((((/* implicit */_Bool) (unsigned short)33919)) ? (((/* implicit */int) ((arr_8 [i_5] [i_5] [i_5] [i_5]) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42099)))))) : (((/* implicit */int) ((signed char) (unsigned short)0)))))));
                arr_19 [i_4] [i_4] [i_4] = ((/* implicit */short) max((((/* implicit */int) arr_7 [i_4] [i_4] [i_4])), ((~(((((/* implicit */int) arr_0 [i_4])) >> (((/* implicit */int) (_Bool)1))))))));
                arr_20 [i_4] [i_4] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) -1644361316)), (arr_3 [i_4])))) ? (((/* implicit */unsigned int) (+(min((((/* implicit */int) (_Bool)1)), (1644361331)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 489774722)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_16 [i_5]))))) ? (arr_18 [i_5] [i_5]) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4] [i_4]))) : (8U)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    var_16 = ((/* implicit */signed char) 8958128074877162429ULL);
                    var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_4])) ? (arr_3 [i_4]) : (arr_3 [i_4])));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 4) 
    {
        for (signed char i_8 = 3; i_8 < 20; i_8 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_9 = 1; i_9 < 22; i_9 += 3) 
                {
                    for (unsigned char i_10 = 0; i_10 < 23; i_10 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 2097136LL)) ? (((/* implicit */int) arr_0 [i_7])) : (-1220364440)))))));
                            var_19 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((signed char) 1032192))) ? (((/* implicit */int) ((signed char) arr_1 [i_8]))) : (((/* implicit */int) arr_30 [i_7] [i_8 + 2] [i_9 + 1]))))));
                            var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1220364451)) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)8176)) - (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1099444518912ULL)) ? (134217727) : (((/* implicit */int) (short)22120))))) : (((((/* implicit */_Bool) arr_26 [i_9 + 1])) ? (arr_9 [i_7] [i_7] [i_7] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (~(1099444518912ULL))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_24 [i_8 - 1] [i_8 - 1])))))));
            }
        } 
    } 
}
