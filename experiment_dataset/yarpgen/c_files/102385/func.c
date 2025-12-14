/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102385
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
    var_14 = min((((/* implicit */int) max(((short)-14389), (((/* implicit */short) (_Bool)1))))), (var_0));
    var_15 = ((/* implicit */_Bool) max(((unsigned short)48592), (((/* implicit */unsigned short) (short)-26229))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] [(_Bool)1] [i_1] = ((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1]);
            var_16 = ((/* implicit */long long int) (-(((/* implicit */int) (short)-17576))));
            var_17 += ((/* implicit */short) 1152921504606322688LL);
        }
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            arr_10 [i_0] [i_0] [i_0] = ((((/* implicit */int) var_7)) ^ ((-(var_13))));
            arr_11 [i_0] [i_2] [i_2] = ((/* implicit */short) (~(((((/* implicit */int) (short)19056)) ^ (((/* implicit */int) var_5))))));
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-1)) ? (2080374784U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-28215)))));
            var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) var_1)) ? (arr_7 [i_2] [i_2]) : (((/* implicit */int) (signed char)-127)))) / ((+(((/* implicit */int) arr_8 [i_2] [i_0]))))));
        }
        arr_12 [(signed char)7] [(signed char)7] = ((/* implicit */short) (~(arr_1 [i_0])));
    }
    for (signed char i_3 = 0; i_3 < 17; i_3 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */short) ((unsigned char) (!(((/* implicit */_Bool) -1426655023594468501LL)))));
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned char i_6 = 0; i_6 < 17; i_6 += 3) 
                {
                    {
                        var_21 += ((/* implicit */int) (short)-26275);
                        /* LoopSeq 2 */
                        for (short i_7 = 0; i_7 < 17; i_7 += 4) 
                        {
                            arr_26 [i_3] [i_4] [i_5] [i_5] [i_7] = (!(((/* implicit */_Bool) (~((+(((/* implicit */int) (short)25962))))))));
                            var_22 += ((/* implicit */signed char) ((max((((((/* implicit */int) var_5)) | (((/* implicit */int) (unsigned short)12)))), (((-366677529) | (((/* implicit */int) var_10)))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)24186))))))))));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 17; i_8 += 4) 
                        {
                            arr_29 [i_3] [i_4] [i_5] [i_6] [i_8] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) > (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) - (603181299U)))));
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) var_4))));
                            arr_30 [i_3] [i_4] [i_4] [i_6] [i_8] [i_8] [i_5] = ((/* implicit */short) (signed char)92);
                            arr_31 [i_3] [i_4] [i_5] [i_6] [(unsigned char)3] = ((/* implicit */_Bool) (-(-70027249)));
                        }
                        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((long long int) (short)-32748)))));
                    }
                } 
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned char) var_2);
}
