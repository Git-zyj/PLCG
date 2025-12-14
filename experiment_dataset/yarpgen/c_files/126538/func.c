/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126538
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
    var_17 += ((/* implicit */unsigned int) var_2);
    var_18 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)26))))))) >= (var_7)));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_3))) ? (((((/* implicit */_Bool) 6498973543110067006LL)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (((/* implicit */long long int) (-(var_12))))))) - ((+(((unsigned long long int) var_13))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) var_7);
        var_21 = (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) var_12)));
        var_22 = ((/* implicit */unsigned char) max((min((((/* implicit */int) (signed char)26)), (max((-1801726372), (((/* implicit */int) (signed char)-26)))))), ((+((~(((/* implicit */int) (signed char)9))))))));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        var_23 ^= ((/* implicit */unsigned char) ((int) ((unsigned char) ((unsigned int) arr_2 [i_1]))));
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((max((6498973543110066995LL), (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)192)), (arr_6 [i_3] [i_4])))))) == (((/* implicit */long long int) (~(min((arr_8 [i_3] [i_2] [i_1]), (((/* implicit */int) var_13))))))))))));
                        var_25 = max((((/* implicit */int) (unsigned char)255)), (max((((/* implicit */int) arr_0 [i_3])), ((~(((/* implicit */int) (unsigned char)0)))))));
                        var_26 = ((/* implicit */long long int) ((((/* implicit */int) var_15)) + (((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_1]))) ? (((((/* implicit */int) arr_0 [(unsigned char)6])) + (1525254263))) : (((((/* implicit */int) arr_0 [i_3])) - (((/* implicit */int) (unsigned char)251))))))));
                    }
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        var_27 |= ((/* implicit */unsigned int) (-(arr_13 [(unsigned char)18] [i_2] [i_3] [i_2])));
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_15 [i_1] [i_5]), (((/* implicit */unsigned long long int) arr_9 [i_1] [i_2] [i_3] [i_5]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (~(-6498973543110067006LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (unsigned short)65510)))))))) : (arr_6 [i_1] [i_1]))))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        var_29 = ((/* implicit */long long int) arr_16 [i_3]);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 1) 
                        {
                            var_30 = ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_11 [11ULL] [i_2] [i_3] [13LL])))))));
                            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(min((var_5), (((/* implicit */unsigned long long int) var_13))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : ((~(arr_5 [i_1] [i_2] [i_1])))));
                        }
                    }
                    for (int i_8 = 1; i_8 < 16; i_8 += 4) 
                    {
                        var_32 = ((/* implicit */unsigned char) ((int) ((unsigned long long int) var_2)));
                        var_33 = ((/* implicit */int) 6498973543110067006LL);
                    }
                    var_34 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((712892508543822881LL) % (-6498973543110066992LL)))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (var_7)))) ? (min((var_5), (14ULL))) : (arr_1 [i_3])))));
                    var_35 = ((/* implicit */unsigned long long int) (~(var_12)));
                    var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) arr_17 [i_3] [i_2] [i_3] [i_1] [i_1] [i_3]))));
                }
            } 
        } 
        var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) (-(arr_19 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
    }
    var_38 = ((/* implicit */long long int) var_7);
}
