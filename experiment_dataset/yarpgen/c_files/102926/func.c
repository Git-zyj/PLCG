/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102926
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
    var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) var_4))));
    var_11 ^= ((/* implicit */unsigned char) var_7);
    var_12 += ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (min((4560494035106218046ULL), (((/* implicit */unsigned long long int) 0))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */_Bool) 0)) ? (min((13886250038603333570ULL), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))))));
        var_14 ^= ((/* implicit */long long int) max((((unsigned long long int) arr_0 [(short)4] [i_0])), (((/* implicit */unsigned long long int) var_9))));
    }
    for (short i_1 = 2; i_1 < 10; i_1 += 1) 
    {
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) min((min((((/* implicit */long long int) (_Bool)1)), (-5151505517351967214LL))), (((/* implicit */long long int) max((arr_2 [i_1] [i_1 + 1]), (arr_2 [i_1] [i_1 + 2])))))))));
        arr_4 [i_1] [i_1] = ((/* implicit */signed char) var_3);
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (short)-30144))));
            var_17 ^= ((/* implicit */_Bool) min((-1219069831), (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-15)), ((unsigned short)43293))))));
        }
        for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
        {
            var_18 = ((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22243))) : (1221719566U));
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (int i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_14 [i_1 + 2] [i_1] [i_5] [i_1]), (((/* implicit */long long int) var_5))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) <= (min((((/* implicit */unsigned long long int) -1219069833)), (13886250038603333570ULL)))))) : (((((/* implicit */_Bool) arr_6 [i_5])) ? (2) : (((/* implicit */int) var_7)))))))));
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) min(((unsigned char)210), (((/* implicit */unsigned char) ((-6154201249975631608LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)48)))))))))));
                    }
                } 
            } 
        }
        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) /* same iter space */
        {
            arr_20 [i_1] [i_6] = ((/* implicit */unsigned short) ((signed char) max((((/* implicit */int) (signed char)15)), (-1219069820))));
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (7949052248704196525ULL)));
            var_22 = ((/* implicit */int) (~(-1892920174619621079LL)));
        }
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned char i_8 = 0; i_8 < 13; i_8 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 1; i_9 < 11; i_9 += 3) 
                    {
                        for (short i_10 = 4; i_10 < 12; i_10 += 3) 
                        {
                            {
                                var_23 += ((/* implicit */signed char) ((var_4) / (max((((long long int) -7516098159424877458LL)), (((long long int) -13))))));
                                arr_34 [i_1] [i_1] [i_1] [i_8] [i_9] [i_10] [i_10] = ((/* implicit */long long int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)27)));
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_4)));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned short) (_Bool)1);
                    arr_35 [i_1] [i_1] [i_8] = ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned long long int) var_4)), (6052025604386621281ULL)))));
                }
            } 
        } 
        var_26 = ((/* implicit */long long int) min((var_9), (min(((unsigned char)7), (arr_25 [i_1])))));
    }
    /* vectorizable */
    for (unsigned char i_11 = 0; i_11 < 21; i_11 += 2) 
    {
        var_27 += ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)45)) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) 840487404)) : (var_0));
        arr_39 [i_11] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_1))));
        /* LoopSeq 2 */
        for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 3) 
        {
            var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(762178745690861271LL))))));
            var_29 = ((/* implicit */int) (+(arr_41 [i_11] [i_12])));
            var_30 += ((/* implicit */int) (signed char)-63);
            arr_42 [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_12] [i_12])) ? (arr_0 [i_12] [i_12]) : (var_0)));
        }
        for (unsigned short i_13 = 0; i_13 < 21; i_13 += 1) 
        {
            arr_45 [(signed char)9] [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */int) (short)19067)) >= (((/* implicit */int) var_3))));
            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_13] [2LL])) ? (arr_0 [i_13] [i_13]) : (-7491881806476174599LL)));
            var_32 = ((/* implicit */unsigned long long int) arr_43 [i_11] [i_11]);
        }
    }
    var_33 = ((/* implicit */signed char) max((var_33), (var_6)));
}
