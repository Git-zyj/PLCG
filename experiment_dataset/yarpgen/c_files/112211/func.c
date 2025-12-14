/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112211
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
    var_13 = (!(var_0));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 8; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (~((-(((/* implicit */int) arr_1 [i_0 + 2]))))));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
        {
            arr_6 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(arr_4 [i_0] [i_0 - 1]))))));
            arr_7 [i_0] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) (unsigned char)236))))));
        }
        for (signed char i_2 = 0; i_2 < 10; i_2 += 3) /* same iter space */
        {
            var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)152)))))));
            var_15 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (short)-26273))))));
            arr_10 [i_0] [i_2] = ((/* implicit */long long int) (-((+(11922839164834616798ULL)))));
        }
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            arr_13 [i_0] [i_0] = ((/* implicit */unsigned int) (~((~(arr_9 [i_0 - 1])))));
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_21 [(signed char)4] [(signed char)4] [(signed char)4] [i_5 - 1] |= ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)137))));
                        arr_22 [i_0] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(var_6))))));
                        arr_23 [i_4] [i_0] [2ULL] [i_5 - 1] [i_4] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_5 [i_5 - 1] [i_5 - 1] [i_5 - 1]))))));
                    }
                } 
            } 
            arr_24 [i_0] = ((/* implicit */_Bool) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)25)))))))));
        }
    }
    for (long long int i_6 = 3; i_6 < 8; i_6 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_8 [i_6 + 1] [(signed char)5] [i_6]))))));
        /* LoopSeq 1 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (short i_9 = 0; i_9 < 10; i_9 += 4) 
                {
                    {
                        arr_36 [i_8] [i_7] [i_8] [6] [i_9] = ((/* implicit */long long int) (+((+((+(((/* implicit */int) (short)-770))))))));
                        var_17 *= ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) var_2))))));
                        arr_37 [i_7] [i_7] [i_8] [i_9] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) -9107858647546240415LL))))));
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned char) (-((+(var_4)))));
            var_19 -= ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_6 + 1])))))));
            arr_38 [i_6] [i_7] = ((/* implicit */unsigned short) (-((+(8942435220038181928ULL)))));
        }
    }
    var_20 = ((/* implicit */signed char) (~(((/* implicit */int) var_0))));
    var_21 = ((/* implicit */short) var_2);
}
