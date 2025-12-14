/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134773
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
    var_14 &= ((/* implicit */unsigned long long int) min((((/* implicit */int) var_1)), (min((((/* implicit */int) var_0)), (((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_1)) - (2767)))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) (+(((((/* implicit */int) (unsigned short)65535)) - (((/* implicit */int) (signed char)56))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */_Bool) ((unsigned long long int) (+((+(545620356))))));
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))), ((+(var_10))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-27078))))) & (((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [10U] [i_1])), ((unsigned short)35266))))))))))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned int) (-2147483647 - 1));
    }
    for (unsigned int i_3 = 1; i_3 < 23; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                {
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) arr_10 [i_3] [i_4]))));
                    var_20 = ((/* implicit */int) min((((/* implicit */unsigned int) (((-(((/* implicit */int) (unsigned short)8)))) * (((/* implicit */int) (unsigned char)59))))), (var_7)));
                    var_21 = ((/* implicit */int) var_8);
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (arr_10 [i_3] [i_4])))) || (((((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_5] [i_6])) || (var_2)))))), (min((min((6612100174065272650LL), (((/* implicit */long long int) -2034816015)))), (((/* implicit */long long int) (!(arr_12 [i_7]))))))));
                                var_23 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (unsigned short)53712)) ? ((+(((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) (unsigned char)27)))) : (min((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))), (((((/* implicit */int) arr_19 [i_3 + 1] [i_4] [i_5] [i_6] [i_7])) ^ (-545620357)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_8 = 3; i_8 < 22; i_8 += 4) 
        {
            for (signed char i_9 = 2; i_9 < 21; i_9 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) (unsigned char)15);
                    arr_27 [i_3 - 1] [(_Bool)1] [i_8] [i_3] = ((/* implicit */unsigned short) min(((-((~(arr_24 [i_3] [(unsigned char)4] [i_8] [i_9]))))), (min((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_19 [i_9] [i_8 - 3] [i_8] [(unsigned short)5] [i_3])))), ((+(((/* implicit */int) var_1))))))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_0)))))) * (((/* implicit */int) min((var_11), (((/* implicit */signed char) ((_Bool) (unsigned char)189))))))));
        var_26 = ((/* implicit */int) min((var_26), (min((((/* implicit */int) arr_11 [i_3] [22ULL] [i_3 - 1])), ((-(((/* implicit */int) (_Bool)1))))))));
        var_27 = ((/* implicit */unsigned long long int) ((int) min((arr_24 [i_3] [i_3] [i_3] [i_3 - 1]), (((/* implicit */int) var_8)))));
    }
    for (long long int i_10 = 2; i_10 < 22; i_10 += 3) 
    {
        arr_31 [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~((-(((/* implicit */int) var_1))))))) ? (min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)53711))))), ((-(((/* implicit */int) (unsigned short)65535)))))) : ((-((+(((/* implicit */int) var_5))))))));
        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (unsigned short)50745))));
    }
}
