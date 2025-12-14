/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161507
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                for (int i_3 = 2; i_3 < 16; i_3 += 1) 
                {
                    {
                        var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned char)131)) / (((/* implicit */int) (unsigned char)141))))))) ? (max((((/* implicit */long long int) (unsigned char)113)), (((var_8) % (((/* implicit */long long int) ((/* implicit */int) var_5))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0])))));
                        var_12 = ((/* implicit */unsigned short) max((max((((((/* implicit */_Bool) 1332588764)) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) max(((unsigned char)115), ((unsigned char)121)))))), (((/* implicit */int) ((min((arr_0 [i_0]), (-5902020110165962613LL))) >= (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 2] [i_2 - 3] [i_2 - 3]))))))));
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)121))))) : (9034691692885474945ULL))) * (((/* implicit */unsigned long long int) ((1538083652) % (((/* implicit */int) arr_5 [i_0] [i_0])))))));
        var_14 |= ((max((((/* implicit */unsigned long long int) (unsigned char)98)), (((unsigned long long int) (unsigned char)114)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)103))));
        var_15 = ((/* implicit */unsigned char) var_4);
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            var_16 -= ((/* implicit */signed char) ((((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned char)139)) : (1014466313))) + (((/* implicit */int) ((unsigned short) arr_7 [(unsigned char)14] [(unsigned char)14]))))) ^ (max((((/* implicit */int) arr_13 [(short)2])), (((((/* implicit */int) (signed char)6)) ^ (-1235322997)))))));
            arr_14 [i_0] = ((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) (unsigned char)135)));
            arr_15 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_6))) && (((/* implicit */_Bool) max((var_0), (arr_7 [i_0] [i_0]))))));
        }
    }
    for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
    {
        var_17 &= ((/* implicit */short) ((((/* implicit */int) var_1)) - (max((((/* implicit */int) (unsigned short)0)), (((var_9) / (((/* implicit */int) (unsigned char)141))))))));
        var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-2147483647 - 1))) ? (11867289281504844611ULL) : (((/* implicit */unsigned long long int) 2297795007U)))) ^ (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)234)), (752212865))))));
        var_19 -= ((/* implicit */short) (+(((/* implicit */int) ((signed char) arr_16 [i_5])))));
    }
    var_20 = max((var_10), (((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))));
}
