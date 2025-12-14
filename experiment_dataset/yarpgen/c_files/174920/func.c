/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174920
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(var_13)))) : (((/* implicit */int) ((_Bool) ((arr_0 [i_0]) && (((/* implicit */_Bool) var_0))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((var_1) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) + ((-2147483647 - 1))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        var_21 = ((/* implicit */signed char) (~(((/* implicit */int) (short)-29653))));
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))) : (7221026417939463383ULL))))));
    }
    for (int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_23 = (((!(((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2])))) || (((/* implicit */_Bool) arr_12 [i_3] [i_3] [i_2])));
            var_24 = ((/* implicit */_Bool) var_19);
            var_25 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_12 [i_2] [i_3] [i_3])) ? (((/* implicit */int) arr_12 [i_2] [i_3] [i_3])) : (((/* implicit */int) arr_12 [i_2] [4] [i_2])))));
        }
        for (unsigned long long int i_4 = 4; i_4 < 12; i_4 += 4) 
        {
            var_26 = ((((/* implicit */_Bool) arr_1 [i_2] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_4 - 2]) <= (((576390383559245824ULL) & (arr_14 [i_4]))))))) : (max((max((arr_9 [i_2]), (((/* implicit */unsigned long long int) (short)-29653)))), (17870353690150305792ULL))));
            arr_16 [i_4] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))), ((+(arr_11 [i_4] [i_4 - 4])))));
        }
        /* vectorizable */
        for (short i_5 = 3; i_5 < 12; i_5 += 3) 
        {
            var_27 = ((unsigned long long int) var_0);
            arr_19 [i_2] [i_5] = ((/* implicit */unsigned long long int) (-2147483647 - 1));
            /* LoopSeq 2 */
            for (long long int i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                var_28 += ((/* implicit */int) ((((/* implicit */int) (unsigned short)65530)) >= (833750797)));
                var_29 -= ((/* implicit */short) 8541558963401829621ULL);
                var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_5] [i_6])) ? (((/* implicit */int) (short)-32748)) : (((/* implicit */int) arr_12 [i_2] [(unsigned char)10] [i_6]))));
            }
            for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 3) 
            {
                var_31 = (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) ^ (arr_14 [i_2])))));
                var_32 = ((/* implicit */unsigned long long int) var_7);
                arr_25 [i_5] = arr_13 [i_2] [i_5 - 3];
            }
        }
        arr_26 [i_2] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(-2147483635)))), (9838403453234774412ULL)));
        var_33 += ((/* implicit */int) ((((arr_8 [i_2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_2]))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2147483642)) ? (((/* implicit */int) arr_24 [i_2])) : (((/* implicit */int) var_19)))))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 17; i_8 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_9 = 1; i_9 < 15; i_9 += 3) 
        {
            arr_32 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) 64512ULL)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : ((-(576390383559245824ULL)))));
            var_34 = (!(((/* implicit */_Bool) ((long long int) var_12))));
        }
        for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 1) 
        {
            arr_35 [(unsigned short)7] [i_8] [(short)3] = ((/* implicit */unsigned long long int) arr_29 [13ULL]);
            arr_36 [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [(short)0] [i_10])) > (((/* implicit */int) var_17)))))) | ((~(arr_29 [i_8])))));
            arr_37 [i_10] [11ULL] = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)58987)) >> (((2147483638) - (2147483608))))) & (833750797)));
        }
        var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((short) arr_5 [i_8])))));
        arr_38 [i_8] [4ULL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_8] [i_8]))));
    }
    var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : ((~((-(-5137618701823337085LL)))))));
    var_37 = (+(((/* implicit */int) ((((((/* implicit */_Bool) 16683715277673190918ULL)) ? (((/* implicit */unsigned long long int) 2147483637)) : (8608340620474777212ULL))) == (((/* implicit */unsigned long long int) -833750786))))));
    var_38 = max((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)235)), (18446744073709551613ULL)))) ? (((/* implicit */unsigned long long int) var_6)) : (3951361140246006590ULL))), (((/* implicit */unsigned long long int) var_18)));
}
