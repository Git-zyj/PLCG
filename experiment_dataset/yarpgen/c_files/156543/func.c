/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156543
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
    var_20 = ((/* implicit */int) var_14);
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_19))));
        var_22 = arr_1 [0ULL] [i_0];
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */long long int) (signed char)9);
        var_24 = ((/* implicit */long long int) min((((unsigned long long int) (signed char)-10)), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)229)) >= (((/* implicit */int) (signed char)65)))) ? (((/* implicit */int) ((short) arr_1 [7] [(unsigned char)2]))) : ((~(0))))))));
        /* LoopNest 3 */
        for (signed char i_2 = 2; i_2 < 9; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    {
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((((/* implicit */_Bool) (~(((/* implicit */int) ((short) -6491197981010249838LL)))))) ? (16345982590706828598ULL) : (((/* implicit */unsigned long long int) (+(arr_9 [(unsigned short)6] [(short)1] [(unsigned short)5]))))))));
                        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) 6491197981010249855LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (-6491197981010249862LL) : (var_6)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_10 [4] [i_2 - 2] [(unsigned short)5] [(unsigned short)10])) : (((/* implicit */int) var_2))))))))));
                        var_27 = ((((/* implicit */_Bool) (signed char)-82)) ? ((-(max((((/* implicit */long long int) (signed char)-46)), (6491197981010249861LL))))) : (((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) (short)32759)) << (((((-1) + (24))) - (11))))))));
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-46)) + (2147483647))) << (((846346245) - (846346245)))))) ? ((+(-6491197981010249861LL))) : (max((-6491197981010249862LL), (((/* implicit */long long int) arr_10 [(signed char)7] [i_1] [i_1] [i_1])))))) + (9223372036854775807LL))) << (((((-6491197981010249865LL) + (6491197981010249903LL))) - (37LL)))));
        var_29 = ((/* implicit */long long int) (-(((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1]))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_6 = 1; i_6 < 10; i_6 += 3) 
        {
            for (long long int i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                {
                    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_5] [i_6] [i_5]))) + (((-6491197981010249875LL) + (((/* implicit */long long int) ((/* implicit */int) arr_11 [(unsigned char)1] [i_6] [i_7] [9LL])))))));
                    var_31 -= ((/* implicit */unsigned int) ((((arr_18 [i_7]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18027))))) - (((/* implicit */unsigned long long int) -1143764838))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_8 = 2; i_8 < 10; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned char i_10 = 0; i_10 < 11; i_10 += 2) 
                {
                    {
                        var_32 = ((/* implicit */unsigned char) ((1687218258) << (((var_17) - (2082458826674150248LL)))));
                        var_33 = ((/* implicit */unsigned short) (~(((long long int) (signed char)104))));
                        var_34 = ((/* implicit */long long int) var_10);
                    }
                } 
            } 
        } 
        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (arr_25 [(short)8] [i_5] [i_5] [10ULL])))) && (((/* implicit */_Bool) -6491197981010249838LL))));
        var_36 = ((/* implicit */unsigned char) ((arr_4 [i_5]) != (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))));
    }
}
