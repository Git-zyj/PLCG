/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168888
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? ((-(((((/* implicit */_Bool) 765091205)) ? (765091205) : (((/* implicit */int) var_11)))))) : ((+(var_5)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        var_18 -= ((/* implicit */short) (!(((/* implicit */_Bool) (~(765091205))))));
        arr_2 [i_0] = ((/* implicit */long long int) (+((((!(((/* implicit */_Bool) var_4)))) ? ((-(((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-26617))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_15 [(short)0] [i_2] [i_3 - 1] [(unsigned short)2] &= ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) var_6)) ? (arr_10 [i_4]) : (((/* implicit */long long int) arr_4 [i_2] [i_3] [i_2])))), (((/* implicit */long long int) min((((/* implicit */int) (short)26635)), (-765091206)))))) / ((-(((arr_7 [i_1 + 4]) & (((/* implicit */long long int) var_15))))))));
                                var_19 *= ((/* implicit */unsigned char) (~((-(-4665708577101656678LL)))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned short) (-(arr_6 [i_0] [i_2])));
                    arr_17 [i_0] [i_0] [i_0] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */unsigned int) arr_4 [i_0 - 1] [i_1 - 1] [i_0])) : (var_15)))), ((+(var_2))));
                }
            } 
        } 
        var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((((/* implicit */int) ((_Bool) var_6))) | (((arr_13 [6]) ? (((/* implicit */int) (short)23458)) : (var_5))))) : (((((/* implicit */_Bool) arr_14 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0])) ? (-765091205) : (((/* implicit */int) (unsigned short)19440))))))));
    }
    for (short i_5 = 2; i_5 < 19; i_5 += 3) 
    {
        /* LoopSeq 3 */
        for (int i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            arr_24 [i_5] [i_6] = ((/* implicit */unsigned short) var_11);
            arr_25 [i_6] [i_6] = ((/* implicit */short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_22 [i_5] [i_6] [i_6])), (8706562531781347079ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)10279), (((/* implicit */unsigned short) arr_18 [5ULL])))))) : (min((((/* implicit */unsigned long long int) (short)24337)), (var_2))))) >> (((((/* implicit */_Bool) min((-1921654197), (-765091211)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)12))) : (min((((/* implicit */unsigned long long int) var_10)), (var_0)))))));
        }
        for (unsigned int i_7 = 0; i_7 < 20; i_7 += 2) /* same iter space */
        {
            arr_29 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) max((min((16882459767233037318ULL), (((/* implicit */unsigned long long int) arr_28 [i_5 - 1] [i_5 - 2])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_28 [i_5 - 2] [i_5 + 1])) << (((1921654197) - (1921654194))))))));
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_19 [i_5 - 1])) | (arr_20 [i_5 - 2])))))) | (min((((/* implicit */unsigned long long int) (unsigned char)117)), ((+(var_4))))))))));
        }
        for (unsigned int i_8 = 0; i_8 < 20; i_8 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_31 [i_5 - 2])) ? (((/* implicit */int) arr_31 [i_5 + 1])) : (((/* implicit */int) arr_31 [i_5 - 2])))), ((((((~(((/* implicit */int) (unsigned short)55257)))) + (2147483647))) << (((min((((/* implicit */unsigned int) var_11)), (var_15))) - (51U)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_9 = 0; i_9 < 20; i_9 += 3) 
            {
                arr_34 [i_5] = ((/* implicit */signed char) (+(-1879834982257121190LL)));
                var_23 = ((((/* implicit */int) arr_23 [i_5 - 1])) | (((/* implicit */int) arr_27 [i_5 - 1] [i_5 + 1])));
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 20; i_10 += 4) 
                {
                    for (signed char i_11 = 0; i_11 < 20; i_11 += 2) 
                    {
                        {
                            arr_41 [i_5] [i_8] [i_9] [16LL] [i_11] = ((/* implicit */unsigned int) var_7);
                            var_24 *= ((/* implicit */short) (+(((/* implicit */int) arr_36 [7] [i_5 - 2]))));
                            arr_42 [(short)17] [i_10] [i_10] [i_9] [i_8] [i_5] = ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (short)26617)));
                            arr_43 [(signed char)14] [i_10] [i_9] [i_8] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 131071U)) ^ (var_4)));
                        }
                    } 
                } 
                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_8])) ? (((/* implicit */unsigned long long int) var_15)) : (var_0)))) ? (765091205) : (((/* implicit */int) var_1))));
                arr_44 [i_5 - 2] [i_8] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (1461300996U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5 + 1])))));
            }
        }
        var_26 -= ((/* implicit */signed char) min(((((-(((/* implicit */int) var_3)))) * (((/* implicit */int) arr_35 [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 + 1])))), ((-((-(((/* implicit */int) (unsigned short)62103))))))));
        arr_45 [i_5] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) var_11))))) ? (max((var_2), (var_0))) : (((/* implicit */unsigned long long int) (~(var_7)))))));
        var_27 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) var_13)) << (((/* implicit */int) (_Bool)1))))), (((var_15) | (((/* implicit */unsigned int) 765091220))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)1570)), (var_0)))) ? (((/* implicit */int) max((var_13), (((/* implicit */short) var_11))))) : (((/* implicit */int) (unsigned short)10286)))))));
    }
    var_28 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_3))));
}
