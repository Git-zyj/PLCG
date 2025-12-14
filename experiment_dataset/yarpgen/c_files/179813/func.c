/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179813
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_2)))))))) : (min((((var_3) + (var_3))), (((((/* implicit */int) (signed char)96)) * (((/* implicit */int) (short)0))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_0 [i_0] [i_0])), (((((/* implicit */_Bool) (unsigned short)853)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (var_4)))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) max((-806120441), (((/* implicit */int) (unsigned short)64683)))))) << (((((/* implicit */int) (unsigned short)64683)) - (64671)))));
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] [i_1] &= ((/* implicit */int) ((unsigned int) (unsigned short)52153));
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) arr_4 [i_1]))));
    }
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) /* same iter space */
    {
        arr_10 [8LL] = ((/* implicit */signed char) (_Bool)1);
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) max(((-(((/* implicit */int) ((-466976932) > (((/* implicit */int) arr_14 [i_2] [i_3] [i_3]))))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) max((-940991708), (var_3)))) != (4085002301721679455ULL)))))))));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                for (long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    for (int i_6 = 2; i_6 < 20; i_6 += 4) 
                    {
                        {
                            arr_25 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) ((signed char) arr_17 [i_6 + 2]));
                            var_18 ^= ((long long int) (-((~(var_6)))));
                        }
                    } 
                } 
            } 
        }
    }
    var_19 = ((/* implicit */unsigned long long int) var_4);
    /* LoopSeq 3 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) (short)-32751)) / (((/* implicit */int) ((signed char) arr_11 [i_9] [i_8] [i_7])))));
                    arr_34 [i_9] = ((/* implicit */unsigned int) var_1);
                    arr_35 [i_9] [i_8] = ((/* implicit */unsigned int) min((((/* implicit */signed char) ((_Bool) (signed char)127))), (((signed char) var_8))));
                }
            } 
        } 
        arr_36 [i_7] [(unsigned short)9] &= ((/* implicit */unsigned short) ((min((11570905645431093ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))))))) % (((unsigned long long int) (short)-32726))));
        var_21 &= ((/* implicit */short) (((~(((/* implicit */int) var_10)))) <= (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_7] [i_7] [i_7]))))) || ((_Bool)1))))));
    }
    for (int i_10 = 0; i_10 < 21; i_10 += 3) /* same iter space */
    {
        var_22 += ((/* implicit */signed char) ((((385846411) / (2147483638))) << (((/* implicit */int) (_Bool)1))));
        var_23 = ((/* implicit */short) min((((unsigned long long int) arr_9 [i_10])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_10] [i_10])) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) / (var_0)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65169))) : (-1678381033839777672LL))))))));
    }
    for (int i_11 = 0; i_11 < 21; i_11 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)768)) != (min((444426086), (-1358609563)))));
        var_25 = ((/* implicit */int) min((var_25), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)69))) < (arr_4 [i_11]))) ? (((/* implicit */int) arr_14 [i_11] [i_11] [i_11])) : (((((/* implicit */_Bool) min((arr_12 [(signed char)19]), (((/* implicit */int) (short)26))))) ? (((/* implicit */int) (short)-32758)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-7079)))))))))));
    }
}
