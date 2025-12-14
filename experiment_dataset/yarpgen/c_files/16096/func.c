/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16096
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
    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))))), ((-(((((/* implicit */unsigned int) -665975223)) % (var_5))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(-665975223)))) <= (3656686964657952997ULL)));
        /* LoopNest 3 */
        for (signed char i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 14; i_2 += 3) 
            {
                for (signed char i_3 = 3; i_3 < 13; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 2; i_4 < 15; i_4 += 4) 
                        {
                            arr_13 [i_2] [i_2 - 2] [i_2] [i_2 - 1] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)19322)) != (((/* implicit */int) (unsigned char)49))));
                            var_13 += ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_3)))));
                            var_14 = (!(((/* implicit */_Bool) 14790057109051598612ULL)));
                        }
                        var_15 *= (!(((/* implicit */_Bool) 18446744073709551588ULL)));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            arr_18 [i_0] [i_5] = ((/* implicit */_Bool) (+((~(var_0)))));
            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (+(var_5))))));
            var_17 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) > (((int) var_7))));
        }
    }
    for (int i_6 = 2; i_6 < 19; i_6 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)224)))))));
        /* LoopNest 3 */
        for (long long int i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (int i_9 = 0; i_9 < 20; i_9 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 1) 
                        {
                            var_19 = ((/* implicit */int) min((var_19), ((-((~(((int) var_1))))))));
                            var_20 = ((/* implicit */unsigned long long int) var_4);
                        }
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            arr_33 [i_6] [(_Bool)1] [i_6] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned short)46214)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)209)))))));
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) (signed char)50)))))))));
                        }
                        var_22 = ((/* implicit */int) var_0);
                        arr_34 [i_6] [i_7] = ((/* implicit */int) ((signed char) (+(((/* implicit */int) (unsigned short)1907)))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_4)), ((~(var_5)))))) <= (min((var_6), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3)))))))));
    }
}
