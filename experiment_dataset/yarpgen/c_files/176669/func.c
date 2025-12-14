/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176669
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
    var_17 *= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) min((7657243681026338791ULL), (var_3))))))));
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_12)) ? (1935427663U) : (var_2))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (2359539629U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 640151600825989485ULL)))))) : (8512678439093776554ULL))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_19 ^= ((/* implicit */unsigned long long int) ((int) (-(arr_3 [i_0] [i_0]))));
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (((~(((/* implicit */int) ((5990068408362742701ULL) <= (arr_3 [i_1] [i_0])))))) != (((/* implicit */int) ((signed char) (-(var_6)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
    {
        var_20 = min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (2359539633U))) + (((/* implicit */unsigned int) ((((/* implicit */int) (short)-15510)) * (((/* implicit */int) (unsigned char)105)))))))), (arr_5 [i_3]));
        var_21 = ((((var_10) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)119)) != (var_9))))))) / (var_2));
        var_22 = ((/* implicit */short) (signed char)14);
    }
    for (unsigned int i_4 = 2; i_4 < 11; i_4 += 1) 
    {
        var_23 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_5)), (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)167))) : (arr_8 [i_4 - 1]))) / (((((/* implicit */_Bool) var_9)) ? (arr_8 [(unsigned char)1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)105)))))))));
        arr_12 [(short)6] = ((/* implicit */long long int) var_6);
    }
    for (unsigned char i_5 = 1; i_5 < 8; i_5 += 4) 
    {
        arr_15 [i_5] = ((/* implicit */unsigned long long int) (-(983876026U)));
        var_24 = ((/* implicit */unsigned long long int) (~(((((-5677311224787801154LL) & (((/* implicit */long long int) 70238259U)))) & (((/* implicit */long long int) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_16)))))))));
        var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_5 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((7639965741002795656ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) var_7)) : (8035182333120678980LL))))))));
        arr_16 [i_5] = ((/* implicit */signed char) ((1935427675U) / (((/* implicit */unsigned int) ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)183)))) || (((/* implicit */_Bool) 2147483647))))))));
        /* LoopNest 3 */
        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            for (unsigned int i_7 = 1; i_7 < 11; i_7 += 3) 
            {
                for (signed char i_8 = 4; i_8 < 11; i_8 += 4) 
                {
                    {
                        arr_23 [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)136)) != (((/* implicit */int) var_13))))) >> (((((/* implicit */int) (short)-7868)) + (7884)))))) || (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) != (var_6))))) != (((unsigned long long int) 1818735269U))))));
                        var_26 = ((/* implicit */unsigned long long int) var_4);
                    }
                } 
            } 
        } 
    }
}
