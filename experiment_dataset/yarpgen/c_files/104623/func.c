/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104623
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
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (!(var_6))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-5990)) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)57128))))) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0])), ((unsigned short)57128)))) > ((~(((/* implicit */int) (signed char)(-127 - 1))))))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 7; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)8408)) >> (((/* implicit */int) arr_1 [i_1 - 1]))))) ? (((((/* implicit */_Bool) -8440104864649126701LL)) ? (8956264363144627357ULL) : (7209731586426266029ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)5093)) ? (((/* implicit */int) (short)-5094)) : (((/* implicit */int) arr_1 [i_1 + 3])))))))));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_1 [i_1 + 2])))))))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-5094)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-17710))) : (((((/* implicit */_Bool) (unsigned short)43010)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (3311036239U)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 + 3]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_1)) : (arr_4 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 3]))) : (min((35184372056064LL), (((/* implicit */long long int) (signed char)-117))))))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 7; i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 4) 
        {
            for (signed char i_4 = 3; i_4 < 7; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_18 [i_2] = ((/* implicit */long long int) (~(3169868325U)));
                        var_20 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) min(((signed char)-5), ((signed char)0)))))) ? (((((/* implicit */_Bool) min((-17179869184LL), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : ((-(1125098971U))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_16 [i_2 + 1] [i_2 + 1] [i_2] [i_5])))))));
                        var_21 = ((/* implicit */short) var_14);
                        var_22 &= ((/* implicit */int) (+(((((/* implicit */_Bool) (short)-26214)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3] [i_3 + 1]))) : (1316779252824307097ULL)))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)35705)) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) (!(((/* implicit */_Bool) 4643758947822457936LL))))))))));
        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_16 [i_2] [i_2 + 3] [i_2] [i_2]), (arr_16 [i_2 + 1] [i_2] [i_2 + 2] [i_2 + 2])))) ? (((unsigned int) (signed char)5)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_2] [i_2 + 1] [i_2] [i_2 - 1]))))))));
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 2) 
    {
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -5413465261683211087LL)) ? (((/* implicit */int) arr_1 [i_6])) : ((-(((/* implicit */int) arr_21 [i_6] [i_6]))))));
        arr_22 [i_6] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)5)) ? (702568482U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-5094)))))));
        /* LoopNest 3 */
        for (signed char i_7 = 0; i_7 < 15; i_7 += 1) 
        {
            for (short i_8 = 0; i_8 < 15; i_8 += 3) 
            {
                for (signed char i_9 = 1; i_9 < 11; i_9 += 4) 
                {
                    {
                        var_26 = ((/* implicit */long long int) (-(((/* implicit */int) var_10))));
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)10)) ? (2125069721875119183LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
        } 
        var_28 = ((/* implicit */signed char) ((unsigned int) arr_1 [i_6]));
    }
    var_29 = ((/* implicit */unsigned long long int) (signed char)0);
    /* LoopSeq 1 */
    for (short i_10 = 0; i_10 < 11; i_10 += 4) 
    {
        var_30 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [6ULL] [i_10] [i_10]))))) ? (((((/* implicit */_Bool) (unsigned char)142)) ? (2748304984U) : (2748304979U))) : (((/* implicit */unsigned int) ((arr_24 [i_10] [i_10] [i_10]) ? (((/* implicit */int) arr_24 [i_10] [i_10] [i_10])) : (((/* implicit */int) arr_24 [(_Bool)1] [7U] [i_10])))))));
        arr_32 [i_10] = ((/* implicit */long long int) arr_31 [i_10] [i_10]);
        var_31 = ((/* implicit */unsigned int) ((((long long int) ((long long int) (short)26205))) >= (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_19 [i_10]))))));
    }
}
