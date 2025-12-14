/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174660
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
    for (short i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_7 [(signed char)18] [i_1] [i_1] [i_1] = ((/* implicit */int) max(((+((~(var_0))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)148)))))));
                    arr_8 [i_1] [i_1] [i_2 - 3] = ((/* implicit */unsigned long long int) (unsigned char)108);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned int) (unsigned short)12017);
    var_14 = ((/* implicit */unsigned short) (unsigned char)92);
    /* LoopSeq 3 */
    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned int) var_2);
        arr_11 [i_3] [i_3] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 636644808U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)30385))) : (5696138780278203894LL)))))))));
        arr_12 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)133))))) : (((((arr_3 [i_3] [i_3]) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)133))))) % (((/* implicit */unsigned int) ((/* implicit */int) max(((short)28593), (((/* implicit */short) var_2))))))))));
        arr_13 [i_3] = ((/* implicit */_Bool) (~(min((arr_6 [i_3] [i_3] [i_3] [i_3]), (((/* implicit */int) var_9))))));
        arr_14 [i_3] = ((/* implicit */long long int) (short)28593);
    }
    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */_Bool) ((unsigned short) (unsigned char)156));
        arr_18 [i_4] [i_4] = ((/* implicit */signed char) (~(((((/* implicit */int) max(((short)-28593), (((/* implicit */short) (signed char)94))))) >> (((((/* implicit */int) (short)28593)) - (28573)))))));
        arr_19 [i_4] = (short)28588;
        /* LoopNest 2 */
        for (unsigned char i_5 = 1; i_5 < 12; i_5 += 4) 
        {
            for (signed char i_6 = 1; i_6 < 13; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 2; i_7 < 12; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 4; i_8 < 13; i_8 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) (short)28593)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)116)))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)144))))) ? (((/* implicit */int) ((var_7) != (((/* implicit */long long int) 2608686280U))))) : (((/* implicit */int) max(((unsigned char)148), (((/* implicit */unsigned char) (signed char)-95)))))))));
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_4] [i_4]))))) & (((int) (unsigned char)122))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 1186245582U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)68))) : (((long long int) 508U))))));
                    arr_30 [i_4] [i_5] [i_5] = ((/* implicit */int) ((unsigned int) (~(2966110892U))));
                    var_20 = ((/* implicit */unsigned int) max(((~((+(((/* implicit */int) (unsigned char)245)))))), ((-(((/* implicit */int) min((var_6), (var_10))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_21 = ((/* implicit */_Bool) var_11);
        arr_33 [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((/* implicit */int) arr_31 [i_9])) == (((/* implicit */int) (unsigned char)140))))) : (((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) 2966110892U)))))));
        arr_34 [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)100))) : (-1LL)));
        arr_35 [i_9] = ((((/* implicit */_Bool) (~(arr_32 [i_9])))) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) arr_32 [i_9])));
    }
}
