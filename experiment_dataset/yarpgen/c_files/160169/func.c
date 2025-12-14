/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160169
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
    var_20 ^= ((/* implicit */short) var_17);
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((arr_1 [i_1 - 1]) | (((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (arr_1 [i_1 - 1]) : (arr_1 [i_1 + 1]))))))));
                arr_8 [i_0] [(unsigned char)12] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 + 1])) || (((/* implicit */_Bool) max(((unsigned short)6647), (((/* implicit */unsigned short) arr_5 [i_1 + 1] [i_1])))))));
                arr_9 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (signed char)-125)) == (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-26293))) >= (var_6))))))) << (((((/* implicit */int) min((((/* implicit */unsigned short) (short)26293)), ((unsigned short)49776)))) - (26270)))));
                var_22 = ((/* implicit */signed char) ((((arr_4 [i_1 - 1] [i_0]) & (arr_4 [i_1 + 1] [i_0 - 2]))) >> ((((~(arr_4 [i_0 - 2] [i_1 + 1]))) + (7008500960265643893LL)))));
            }
        } 
    } 
    var_23 |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)161))))))), (((((/* implicit */_Bool) min((var_17), ((unsigned short)49776)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) & (((/* implicit */int) var_15))))) : (((((/* implicit */unsigned long long int) 237915445U)) & (var_11)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (int i_4 = 2; i_4 < 19; i_4 += 3) 
            {
                for (int i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    {
                        arr_20 [5] = ((/* implicit */unsigned int) var_5);
                        arr_21 [i_2] [i_3] [i_3] [i_4] [i_5] = arr_19 [8ULL] [i_2] [i_3] [i_4] [i_5] [i_5];
                    }
                } 
            } 
        } 
        arr_22 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_2])) % (1907040968)))) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) (_Bool)1))));
        arr_23 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((((/* implicit */int) var_19)) + (2147483647))) >> (((var_16) - (9837035716267816617ULL))))) : ((+(((/* implicit */int) arr_15 [i_2]))))));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_2] [i_2])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (_Bool)1))))));
    }
    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
    {
        arr_26 [i_6] [i_6] = ((/* implicit */long long int) 1841216609);
        /* LoopSeq 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 2; i_8 < 19; i_8 += 3) 
            {
                for (signed char i_9 = 1; i_9 < 19; i_9 += 1) 
                {
                    {
                        arr_35 [i_9] [i_8] [i_9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((max((((/* implicit */unsigned int) arr_12 [(signed char)5])), (arr_17 [i_6] [i_7] [i_8] [i_9]))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_7]))) > (var_11)))))))));
                        var_25 = ((/* implicit */_Bool) ((((unsigned int) arr_19 [i_9] [i_8 - 1] [i_8 - 2] [i_8 + 1] [i_8] [i_7])) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((237915445U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-37)))))) ? (((/* implicit */int) ((arr_12 [i_6]) && (((/* implicit */_Bool) -1717974680))))) : ((+(((/* implicit */int) arr_29 [i_6] [i_7] [i_8])))))))));
                        arr_36 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */_Bool) var_6);
                    }
                } 
            } 
            arr_37 [i_6] [i_7] [i_7] = min((arr_33 [i_7] [i_7] [i_6]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_7])))))))));
            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (((((!(((/* implicit */_Bool) arr_31 [i_7] [i_7] [i_7] [i_6])))) ? (((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_7] [i_7] [i_6] [i_6]))) : (arr_28 [i_6]))) : (var_13))) << (((min((((((/* implicit */_Bool) var_2)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) var_12))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_29 [i_7] [i_7] [i_6]))))))) - (179LL))))))));
        }
        for (int i_10 = 0; i_10 < 20; i_10 += 4) 
        {
            arr_42 [i_6] [(unsigned short)6] = ((/* implicit */int) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_6] [i_6] [i_6]))) / (((((/* implicit */_Bool) arr_39 [(unsigned char)2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_6]))) : (arr_39 [i_6])))))));
            /* LoopNest 2 */
            for (unsigned int i_11 = 2; i_11 < 16; i_11 += 4) 
            {
                for (long long int i_12 = 0; i_12 < 20; i_12 += 4) 
                {
                    {
                        arr_50 [i_6] [i_10] [i_6] [i_10] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_15 [i_6])))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (15802757458578746956ULL))))))), (arr_48 [i_6] [i_10])));
                        arr_51 [i_12] [i_6] [i_11] [i_10] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) 911374165))))) | (((/* implicit */int) (short)31352)))) : (((/* implicit */int) arr_10 [i_12]))));
                        var_27 = ((/* implicit */int) max((((((unsigned int) (unsigned char)7)) >> (((/* implicit */int) arr_44 [i_6] [i_11] [i_11 + 4] [i_11 + 3])))), (((/* implicit */unsigned int) ((unsigned short) arr_24 [i_11 - 1])))));
                    }
                } 
            } 
        }
        var_28 = ((/* implicit */signed char) var_1);
    }
    var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) >> (((/* implicit */int) var_1))))) / (var_6)))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) ((var_6) >> (((var_13) - (8941637059393898860ULL)))))) ? (((/* implicit */int) max((((/* implicit */short) var_15)), (var_4)))) : (((/* implicit */int) var_19))))));
}
