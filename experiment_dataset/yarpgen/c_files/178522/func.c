/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178522
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_16 += ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)172)) : (((/* implicit */int) (unsigned short)39498)))));
                    arr_9 [i_0] [i_0] [i_0] [(unsigned short)9] = ((/* implicit */unsigned char) max(((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)247)))))), (((/* implicit */int) max((arr_5 [i_0] [i_2]), (((/* implicit */unsigned short) ((signed char) arr_4 [i_1] [i_1] [i_1]))))))));
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */signed char) (-((+((-(((/* implicit */int) var_5))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_12);
    /* LoopSeq 2 */
    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) ((unsigned short) (unsigned char)64)))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)1)) % (((/* implicit */int) (unsigned short)46932))))))))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_11 [i_3])))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_11 [(unsigned char)13]))))))) ? (max(((~(((/* implicit */int) var_10)))), (((/* implicit */int) arr_11 [i_3])))) : (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [i_3])) == (((/* implicit */int) (unsigned short)21275))))), (min((((/* implicit */unsigned short) (unsigned char)28)), (arr_11 [i_3]))))))));
        var_20 ^= ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [(unsigned char)18])) ? (((/* implicit */int) arr_12 [(unsigned short)10])) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) max(((unsigned char)239), ((unsigned char)192)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_11 [i_3])))))));
    }
    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        var_21 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_13 [i_4] [i_4]), ((unsigned short)5566)))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) arr_13 [i_4] [i_4]))))) : (((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */int) arr_13 [i_4] [i_4])) : (((/* implicit */int) arr_13 [i_4] [i_4]))))));
        arr_16 [(unsigned short)17] [(unsigned short)17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)82)) ? (((/* implicit */int) (unsigned short)21275)) : (((/* implicit */int) (unsigned char)148))))) ? (((((/* implicit */_Bool) ((signed char) (unsigned char)215))) ? (((/* implicit */int) min(((unsigned short)7498), (((/* implicit */unsigned short) (unsigned char)148))))) : (((((/* implicit */_Bool) (unsigned short)21275)) ? (((/* implicit */int) (unsigned short)55426)) : (((/* implicit */int) arr_15 [(unsigned short)2])))))) : (((/* implicit */int) (unsigned short)31693))));
        arr_17 [(unsigned short)0] = ((/* implicit */unsigned short) var_0);
    }
    var_22 &= ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (unsigned char)133)), (((unsigned short) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_0)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_5 = 1; i_5 < 21; i_5 += 2) 
    {
        arr_20 [(unsigned short)7] |= ((/* implicit */signed char) ((((/* implicit */int) arr_18 [i_5 + 1])) * (((/* implicit */int) arr_18 [i_5 - 1]))));
        arr_21 [i_5 - 1] = ((/* implicit */unsigned short) ((unsigned char) ((unsigned short) var_9)));
        arr_22 [i_5 + 1] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_19 [i_5 - 1] [i_5 - 1])) : (((/* implicit */int) (unsigned char)255)))));
        var_23 = (unsigned short)31693;
    }
    for (unsigned short i_6 = 1; i_6 < 11; i_6 += 1) 
    {
        var_24 = ((/* implicit */unsigned char) ((unsigned short) (-(((/* implicit */int) (unsigned char)28)))));
        var_25 ^= ((/* implicit */unsigned short) ((unsigned char) ((unsigned char) min((((/* implicit */unsigned short) (unsigned char)249)), ((unsigned short)33614)))));
        arr_25 [i_6] [(signed char)6] |= ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) arr_12 [(unsigned char)2])) & (((/* implicit */int) arr_12 [(unsigned char)14])))));
    }
}
