/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184859
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 24; i_0 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) min((((/* implicit */int) var_11)), (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)65527))))));
        var_18 = ((/* implicit */signed char) (+(((((arr_1 [i_0 - 2]) | (var_5))) / (((/* implicit */unsigned int) (+(((/* implicit */int) var_12)))))))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (((_Bool)0) ? (10553465712542809418ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19180))))))));
        arr_2 [i_0 + 1] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 7893278361166742197ULL)) ? (((/* implicit */int) (unsigned short)23881)) : (((/* implicit */int) (signed char)-108))))), (((unsigned int) var_0))));
    }
    for (unsigned char i_1 = 3; i_1 < 24; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_2 = 2; i_2 < 21; i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 1; i_3 < 24; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    {
                        var_20 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_8))) ? (((/* implicit */int) arr_11 [i_3] [20U] [24U] [i_2 + 2])) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_14))))))) ? ((-(var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                        arr_13 [i_3] [i_4] [8LL] [8LL] [i_3] = ((/* implicit */short) arr_5 [i_3 - 1]);
                        var_21 = ((/* implicit */unsigned short) var_2);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_5 = 3; i_5 < 23; i_5 += 1) 
                        {
                            arr_16 [i_1 + 1] [(unsigned short)21] [i_3 + 1] [i_4] [i_3] = ((/* implicit */unsigned int) var_11);
                            arr_17 [i_1 - 1] [i_2] [17U] [i_2] [i_3] = ((/* implicit */signed char) (-(arr_8 [i_2] [i_2 - 1] [i_3])));
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (~(arr_3 [i_4]))))));
                        }
                        for (unsigned int i_6 = 1; i_6 < 24; i_6 += 3) 
                        {
                            var_23 = ((/* implicit */signed char) (unsigned short)51463);
                            var_24 = ((/* implicit */signed char) var_5);
                        }
                    }
                } 
            } 
            /* LoopNest 3 */
            for (short i_7 = 0; i_7 < 25; i_7 += 4) 
            {
                for (short i_8 = 2; i_8 < 23; i_8 += 4) 
                {
                    for (short i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        {
                            arr_29 [(signed char)5] = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) arr_11 [(unsigned short)20] [i_8] [i_8] [i_9])))));
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) arr_26 [(signed char)17] [i_7] [i_8]))));
                            var_26 = ((/* implicit */_Bool) max((var_26), ((!((!((_Bool)0)))))));
                            arr_30 [i_1] [i_1] [i_7] [i_8] [i_9] = ((/* implicit */signed char) ((_Bool) max(((+(arr_27 [i_1] [i_2] [i_7] [(_Bool)1] [i_9] [i_2] [i_7]))), (((((/* implicit */_Bool) 1893725985U)) ? (((/* implicit */int) (unsigned short)2415)) : (((/* implicit */int) (unsigned short)63120)))))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_10 = 2; i_10 < 21; i_10 += 1) /* same iter space */
        {
            arr_33 [14U] [i_10] = ((/* implicit */signed char) max(((~(10581416659065303094ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_21 [i_1 + 1] [i_1]))))) - (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_20 [23U] [i_10] [i_1] [i_1])))))))));
            var_27 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)59122))));
            var_28 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (10553465712542809419ULL))));
        }
        arr_34 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? ((~(((((/* implicit */_Bool) (short)-5894)) ? (4503599627370495LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19181))))))) : (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1 - 3] [i_1] [i_1])));
    }
    for (unsigned char i_11 = 3; i_11 < 24; i_11 += 1) /* same iter space */
    {
        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) var_5)) ? (var_5) : (arr_3 [i_11]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_18 [(unsigned short)22] [i_11] [i_11] [(signed char)9] [i_11 - 2] [i_11] [i_11])))))))))))));
        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (~((~(var_16))))))));
        /* LoopNest 2 */
        for (long long int i_12 = 0; i_12 < 25; i_12 += 1) 
        {
            for (unsigned long long int i_13 = 2; i_13 < 23; i_13 += 1) 
            {
                {
                    arr_43 [i_13] [i_12] [i_13] = ((/* implicit */signed char) var_3);
                    var_31 = ((/* implicit */long long int) ((max((564748430821264444LL), (((/* implicit */long long int) (unsigned short)63120)))) <= (((/* implicit */long long int) ((/* implicit */int) max((arr_6 [i_11 - 2] [i_11 - 2] [i_11 + 1]), (arr_6 [i_11 - 3] [i_11 - 1] [i_11 - 3])))))));
                    var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) var_7))));
                }
            } 
        } 
        var_33 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
    }
    /* LoopNest 3 */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        for (short i_15 = 0; i_15 < 18; i_15 += 4) 
        {
            for (unsigned short i_16 = 0; i_16 < 18; i_16 += 3) 
            {
                {
                    var_34 &= ((/* implicit */_Bool) (+(var_13)));
                    arr_51 [1LL] [1LL] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)19686)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52404))) : (3568227118U)))));
                    arr_52 [i_14] [i_14] [i_16] = ((/* implicit */unsigned int) var_14);
                    arr_53 [i_16] [i_15] [(unsigned short)0] = ((/* implicit */_Bool) (+(min((((((/* implicit */_Bool) -6022584646878587809LL)) ? (726740178U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)30530))))), (min((((/* implicit */unsigned int) (signed char)0)), (6U)))))));
                }
            } 
        } 
    } 
    var_35 = ((/* implicit */_Bool) (((((!(((/* implicit */_Bool) var_7)))) || (((_Bool) var_1)))) ? (((/* implicit */unsigned long long int) ((long long int) ((var_16) >> (((var_0) - (3477034443U))))))) : (((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_8)))) : (var_7)))));
    var_36 &= ((/* implicit */_Bool) var_8);
    var_37 = ((/* implicit */_Bool) (+(var_0)));
}
